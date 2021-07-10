class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        int temp;
        int  sum=0;
        for(int i=0;i<n;i++)
        {
           temp=rom(s[i]);
            if(i==n-1)
                return (sum+temp);
            if(temp<rom(s[i+1])){
                sum=sum+rom(s[i+1])-temp;
                i=i+1;
            }
                else
                    sum=sum+temp;
        }
        return sum;
    }
    int rom(char c)
    {
        int temp;
         if(c=='I')
                temp=1;
           else if(c=='V')
                temp=5;
           else if(c=='X')
                temp=10;
           else if(c=='L')
                temp=50;
           else if(c=='C')
                temp=100;
           else if(c=='D')
                temp=500;
           else if(c=='M')
                temp=1000;
            return temp;
    }
};