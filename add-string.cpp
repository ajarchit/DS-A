class Solution {
public:
    string addStrings(string num1, string num2) {
        int n,i;
        long int m=0,j=0;
        for(i=0;i<num1.size();i++)
        {
            n=num1[i]-48;
            m=(m*10)+n;
        }
        
        for(i=0;i<num2.size();i++)
        {
            n=num2[i]-48;
            j=(j*10)+n;
        }
        int sum=j+m;
        string s="";
        while(sum)
        {
            n=sum/10;
            s=char(n+48);
            sum=sum%10;
        }
        return s;
    }
};