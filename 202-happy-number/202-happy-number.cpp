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
        int slow = n;
        int fast = getNumber(n);
        while(fast!=1 and slow!=fast){
            slow = getNumber(slow);
            fast = getNumber(getNumber(fast));
        }
        return fast==1;
    }
};