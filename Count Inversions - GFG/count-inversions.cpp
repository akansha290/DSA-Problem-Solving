// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long merge(long long *arr,long long *temp,long long lo, long long mid,long long hi){
        long long  i=lo,j=mid+1,k=lo;
        long long  ans = 0;
        
        while(i<=(mid) and j<=hi){
            if(arr[i]<=arr[j]){
                temp[k++] = arr[i++];
            }
            else{
                ans = ans + (mid-i+1);
                temp[k++] = arr[j++];
            }
        }
        while(i<=mid){
            temp[k++] = arr[i++];
        }
        while(j<=hi){
            temp[k++] = arr[j++];
        }
        for(int i=lo;i<=hi;i++){
            arr[i] = temp[i];
        }
        return ans;
        
    }
    long long mergesort(long long *arr,long long *temp,long long lo,long long hi){
        long long conv = 0,mid;
        if(lo<hi){
            mid = (lo+hi)/2;
            conv += mergesort(arr,temp,lo,mid);
            conv += mergesort(arr,temp,mid+1,hi);
            conv += merge(arr,temp,lo,mid,hi);
        }
        return conv;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long temp[N];
        long long ans = 0;
        ans = mergesort(arr,temp,0,N-1);
        // for(int i=0;i<N;i++){
        //     cout<<arr[i]<<" ";
        // }
        return ans;
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends