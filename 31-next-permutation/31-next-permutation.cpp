class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(),k,l;
        //1st loop is to find from where the sequence has started to be in increasing order.
        for(k=n-2;k>=0;k--){
            if(nums[k]<nums[k+1]) break;
        }
        // if the nums last permutation is actually nums then k=-1;
        //We just need to reverse it to find the first permutation 
        if(k<0){
            reverse(nums.begin(),nums.end());
        }
        //We would traverse from backward and find the first element whose value is greater than the value of increasing sequence.
        else{
            for(l=n-1;l>k;l--){
                if(nums[l]>nums[k]) break;
            }
            //Then we would swap those numbers and reverse from the right of nums of increasing sequence to end.
            swap(nums[l],nums[k]);
            reverse(nums.begin()+k+1,nums.end());
        }
    }
};