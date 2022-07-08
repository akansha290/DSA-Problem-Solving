class Solution {
public:
    int getNumber(int n){
        int sum=0;
        while(n){
            int d = n%10;
            n = n/10;
            sum += (d*d);
        }
        return sum;
    }
    bool isHappy(int n) {
        set<int> st;
        while(n!=1 and st.find(n)==st.end()){
            st.insert(n);
            n = getNumber(n);
        }
        return n==1;
    }
};