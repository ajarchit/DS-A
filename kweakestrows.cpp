class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int r=mat.size(),c=mat[0].size(),i,j;
        vector<pair<int,int>> res;
        for(i=0;i<r;i++)
        {
            int sum=0;
            for(j=0;j<c;j++){
                if(mat[i][j]==0)
                    break;
            }
            sum=j;
            res.push_back(make_pair(sum,i));
        }
        sort(res.begin(),res.end());
        vector<int> vect;
        for(i=0;i<k;i++)
            vect.push_back(res[i].second);
        return vect;
    }
};