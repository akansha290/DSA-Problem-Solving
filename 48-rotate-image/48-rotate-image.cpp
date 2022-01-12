class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int> > v;
	int r=matrix.size(), c= matrix[0].size();
	for(int i=0;i<r;i++){
		vector<int> temp;
		for(int j=c-1;j>=0;j--){
			temp.push_back(matrix[j][i]);	
		}
		v.push_back(temp);
	}
	    matrix.clear();
        matrix=v;
    }
};