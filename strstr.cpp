class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int i,j,c=1;
        int m=haystack.size();
        int n=needle.size();
        if(n==0 )
            return 0;
            
        for(i=0;i<m-n+1;i++)
        {
            c=1;
            if(haystack[i]==needle[0])
            {
                for(j=1;j<n;j++)
                {
                    if(haystack[i+j]!=needle[j])
                        break;
                    else
                        c++;
                }
                            
                if(c==n)
                    return i;
            }
        }
        return -1;
    }
};