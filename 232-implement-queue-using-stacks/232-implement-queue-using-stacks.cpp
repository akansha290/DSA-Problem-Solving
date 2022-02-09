class MyQueue {
public:
    stack<int> s1,s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(s1.empty()) {
            s1.push(x);
            return;}
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        
        
    }
    
    int pop() {
        if(s1.empty()) return -1;
        int data = s1.top();
        s1.pop();
        return data;
    }
    
    int peek() {
        if(s1.empty()) return -1;
        int data = s1.top();
        return data;
    }
    
    bool empty() {
        return(s1.empty());
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */