class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,o=0,t=0;
        for(auto it:nums){
            if(it==0) z+=1;
            else if(it==1) o+=1;
            else t+=1;
        }
        int i=0;
        while(i<z){
            nums[i++]=0;
        }
        while(i<z+o){
            nums[i++]=1;
        }
        while(i<nums.size()){
            nums[i++]=2;
        }
    }
};