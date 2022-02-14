class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Moore's Voting Algorithm
        int count = 0, candidate;
        for(auto num:nums){
            if(count==0) 
                candidate=num;
            if(candidate==num)
                count++;
            else
                count--;
            
        }
        return candidate;
    }
};