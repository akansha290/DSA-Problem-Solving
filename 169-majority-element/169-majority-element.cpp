class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0, candidate=0;
        for(auto num:nums){
            if(count==0){
                candidate=num;
                count=1;
            }
            else if(num==candidate){
                count++;
            }
            else{
                count--;
            }
        }
        return candidate;
    }
};