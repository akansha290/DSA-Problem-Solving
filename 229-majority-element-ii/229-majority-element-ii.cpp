class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //Boyer Moore Voting Algorithm
        int sz = nums.size();
        int num1 = INT_MIN, num2 = INT_MIN;
        int cnt1 = 0, cnt2 = 0;
        for(auto num:nums){
            if(num == num1) cnt1+=1;
            else if(num == num2) cnt2+=1;
            else if(cnt1==0){
                num1 = num;
                cnt1 = 1;
            }
            else if(cnt2==0){
                num2 = num;
                cnt2 = 1;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        vector<int> ans;
        cnt1=cnt2=0;
        for(auto it:nums){
            if(it==num1) cnt1+=1;
            if(it==num2) cnt2+=1;
        }
        // cout<<num1<<" "<<num2<<" "cnt1<<" "<<cnt2;
        if(cnt1>(sz/3)) ans.push_back(num1);
        if(cnt2>(sz/3)) ans.push_back(num2);
        // if(cnt2>(sz/3) and num1!=num2) ans.push_back(num2);
        
        return ans;
    }
};