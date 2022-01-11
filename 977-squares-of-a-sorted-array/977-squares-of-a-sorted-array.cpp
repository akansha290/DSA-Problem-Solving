class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        vector<int> ans(arr.size());
	for(int i=0;i<arr.size();i++){
		ans[i] = pow(arr[i],2);
	}
	sort(ans.begin(),ans.end());
	return ans;
    }
};