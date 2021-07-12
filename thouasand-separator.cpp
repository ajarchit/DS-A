class Solution {
public:
    string thousandSeparator(int n) {
        string s=to_string(n);
        string res;
        int m=s.size();
        int c=0;
        for(int i=m-1;i>=0;i--)
        {
        if(c==3)
        {
            res=res+'.';
            c=0;
        }
            
            res=res+s[i];
            c++;
            
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};