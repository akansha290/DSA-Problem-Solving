// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long nums1[], long long nums2[], int n, int m) 
        { 
            // code here 
            
            // using gap method
            int gap = ceil((float)(m+n)/2);
            int total = n+m, i =0,j = gap;
            
            while(gap > 0)
            {
                while(j < total){
                    // comparing in same array
                    if(j<n and nums1[i] > nums1[j]){
                        swap(nums1[i],nums1[j]);
                    }
                    
                    // comapring 1 and 2 array
                    else if(j>=n and i<n and nums1[i] > nums2[j-n]){
                        swap(nums1[i],nums2[j-n]);
                    }
                    
                    //comparing in same array 2
                    else if(j>=n and i>=n and nums2[i-n] > nums2[j-n]){
                        swap(nums2[i-n],nums2[j-n]);
                    }
                    i++, j++;
                } 
                    if(gap == 1) gap =0;
                    
                    else
                    {
                        gap = ceil((float)gap/2);
                        i=0;
                        j = gap;
                    }
            }
        }
};

// { Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 
  // } Driver Code Ends