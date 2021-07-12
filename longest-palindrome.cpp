class Solution {
public:
    int longestPalindrome(string s) {
        map <char,int> m;
        int sum=0;
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        for(auto x:m)
        {
            if(x.second%2==0)
            {
                sum=sum+x.second;
            }
            else
            {
                    sum=sum+x.second-1;
                    c=1;
            }
        }
        sum=sum+c;
        return sum;
        
    }
};