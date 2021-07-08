class Solution {
public:
    
    void rotate(vector<vector<int>>& v)
    {
        
        int i,j;
        for(i=0;i<v.size();i++)
        {
            for(j=i;j<v.size();j++)
            {
                swap(v[i][j],v[j][i]);
        }
        }
        reverse(v.begin(),v.end());
    }
    
bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) { 
    int t=3;    
    if(mat==target)
            return true;
        while(t--)
        {
            rotate(mat);
            if(mat==target)
                return true;
        }
        return false;
}
};
