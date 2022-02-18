class Solution {
public:
    void reverse(vector<int>& nums,int i,int j){
        while(i<=j)
            swap(nums[i++],nums[j--]);
        
    }
    void rotate(vector<int>& nums, int k) {
        if(k==0 or nums.size()==0 or nums.size()==1) return;
        if(k>=nums.size()){
            k=k%nums.size();
        }
        reverse(nums,0,nums.size()-1);
        reverse(nums,0,k-1);
        reverse(nums,k,nums.size()-1);
    }
};