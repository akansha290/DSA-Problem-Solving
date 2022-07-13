class LRUCache {
public:
    class node{
        public :
            int key;
            int value;
            node *next;
            node *prev;
            node(int _key, int _value){
                key = _key;
                value = _value;
            }
    };
    node *head = new node(-1,-1);
    node *tail = new node(-1,-1);
    
    int cap;
    unordered_map<int,node *>mpp;
    
    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    void deletenode(node *del){
        node *delprev = del->prev;
        node *delnext = del->next;
        delprev->next = delnext;
        delnext->prev = delprev;
    }
    
    void addnode(node *newnode){
        node *pre = head->next;
        newnode->next = pre;
        pre->prev = newnode;
        head->next = newnode;
        newnode->prev = head;
        
    }
    
    int get(int _key) {
        if(mpp.find(_key)!=mpp.end()){
            node *found = mpp[_key];
            int val = found->value;
            deletenode(found);
            node *newnode = new node(_key,val);
            addnode(newnode);
            mpp[_key] = newnode;
            return val;
        }
        return -1;
        
    }
    
    void put(int _key, int _value) {
        if(mpp.find(_key)!=mpp.end()){
            node *existing_node = mpp[_key];
            mpp.erase(_key);
            deletenode(existing_node);
        }
        if(mpp.size()==cap){
            mpp.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        node *newnode = new node(_key,_value);
        addnode(newnode);
        mpp[_key] = newnode;
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */