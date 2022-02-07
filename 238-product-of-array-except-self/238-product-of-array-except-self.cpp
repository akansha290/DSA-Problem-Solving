class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //size of given array
        int n = nums.size();
        //Left Prefix Sum of the array except self;
        vector<int> L(n,1);
        //Right Prefix Sum of the array except self;
        vector<int> R(n,1);
        //Result Vector;
        vector<int> ans(n,1);
        for(int i=1;i<n;i++){
            L[i] = L[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            R[i] = R[i+1]*nums[i+1];
        }
        
        //Multiply both vectors corresponding to same index
        for(int i=0;i<n;i++){
            ans[i] = L[i]*R[i];
        }
        return ans;
    }
};