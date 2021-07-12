class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> v;
        vector<int> res;
        int n,i,j,dif;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==c)
            {
                v.push_back(i);
            }
        }
        for(i=0;i<s.size();i++)
        {
            if(s[i]!=c)
            {
                dif=INT_MAX;
                   for(j=0;j<v.size();j++)
                {
                    dif=min(dif,abs(v[j]-i));
                }
                res.push_back(dif);
            }
            else{
                res.push_back(0);
            }
        }
        return res;
    }
};