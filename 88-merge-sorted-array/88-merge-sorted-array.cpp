class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1;
        int total = m+n-1;
        while(total>=0 and i>=0 and j>=0){
            if(nums1[i]>=nums2[j]){
                nums1[total--]=nums1[i--];
            }
            else if(nums1[i]<nums2[j]){
                nums1[total--]=nums2[j--];
            }
        }
        while(total>=0 and i>=0){
            nums1[total--]=nums1[i--];
        }
        while(total>=0 and j>=0){
            nums1[total--]=nums2[j--];
        }
    }
};