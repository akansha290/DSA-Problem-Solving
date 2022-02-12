class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1=m-1,p2=n-1;
        int pointer = m+n-1;
        while(pointer>=0 and p1>=0 and p2>=0){
            if(nums1[p1]>=nums2[p2]){
                nums1[pointer] = nums1[p1];
                p1--;
            }
            else if(nums2[p2]>=nums1[p1]){
                nums1[pointer] = nums2[p2];
                p2--;
            }
            pointer--;
        }
        while(pointer>=0 and p2>=0){
            nums1[pointer--] = nums2[p2--];
        }
    }
};