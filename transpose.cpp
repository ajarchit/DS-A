class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int m,n;
        m=matrix.size();
        n=matrix[0].size();
       vector<vector<int>> vec(n, vector<int>(m, 0));
        
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			vec[j][i] = matrix[i][j];
		}
	}
	return vec;
        
    }
};