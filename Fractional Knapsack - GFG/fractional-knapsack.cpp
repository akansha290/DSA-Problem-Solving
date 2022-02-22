// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/
bool cmp(pair<double,double>ele1,pair<double,double>ele2){
    double r1 =(double)ele1.first/(double)ele1.second;
    double r2 = (double)ele2.first/(double)ele2.second;
    
    if(r1>r2)
    return true;
    
    return false;
}

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        pair<double,double> vect[n];
        for(int i=0;i<n;i++){
            vect[i].first= arr[i].value;
            vect[i].second=arr[i].weight;
        }
        
        sort(vect,vect+n,cmp);
        double profit=0;
        
        for(int i=0;i<n;i++){
            if(vect[i].second<=W && W>0){
              profit+=vect[i].first; 
              W-=vect[i].second;
            }
            
            else
            {
                double res= (double)vect[i].first/(double)vect[i].second;
                profit+=res*W;
                break;
            }
        }
        return profit;
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends