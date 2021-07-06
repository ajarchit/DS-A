class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) { 
        vector<int> res;
        int r=matrix.size(),c=matrix[0].size(), mini=INT_MAX,maxi=INT_MIN;
        int col=0;
        for(int i=0;i<r;i++)
        {
         mini=INT_MAX;
         maxi=INT_MIN;
         col=0;
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]<mini)
                {
              mini=min(mini,matrix[i][j]);  
              col=j;
                }
            } 
            for(int j=0;j<r;j++)
            {
              maxi=max(maxi,matrix[j][col]);  
            }
            if(mini==maxi)
            {
                res.push_back(mini);
                return res;
            }  
        }
        return res;
    }
};
