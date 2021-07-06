class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int c=0;
        int r=grid.size();
      //  int c=grid[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]<0)
                    c=c+1;
            }
        }
        return c;
    }
};