class Solution {
public:
    void rev(vector<char>& s,int lo,int hi){
        if(lo>=(hi/2)) return;
        // cout<<s[lo]<<" "<<s[hi-lo-1]<<endl;
        swap(s[lo],s[hi-lo-1]);
        rev(s,lo+1,hi);
    }
    void reverseString(vector<char>& s) {
        rev(s,0,s.size());
        return;
    }
};