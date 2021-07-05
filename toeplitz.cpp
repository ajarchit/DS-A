class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int i=0,j=0,m,n;
        m=matrix.size();
        n=matrix[0].size();
        for(int i=1;i<m;i++)
        {
            for(j=1;j<n;j++)
            {
                if(matrix[i][j]!=matrix[i-1][j-1])
                    return false;
            }
        }
        return true;
    }
};