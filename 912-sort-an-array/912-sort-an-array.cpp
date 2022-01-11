class Solution {
public:
    void merge(vector<int> &a,int start,int end){
        int m= start+(end-start)/2;
        int i=start,j=m+1,k=0;
        vector<int> ans(end-start+1);
        while(i<=m and j<=end){
            if(a[i]<=a[j]) ans[k++]=a[i++];
            else ans[k++]=a[j++];
        }
        while(i<=m) ans[k++]=a[i++];
        while(j<=end) ans[k++]=a[j++];
        for(int i=0;i<k;i++){
            a[start+i]=ans[i];
        }
    }
    void mergesort(vector<int> &a,int start, int end){
        if(start>=end) return;
        int m = start+(end-start)/2;
        mergesort(a,start,m);
        mergesort(a,m+1,end);
        merge(a,start,end);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};