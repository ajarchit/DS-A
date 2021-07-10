class Solution {
public:
    string addBinary(string a, string b) {
        
        int i=a.length()-1;
        int j=b.length()-1;
        int sum=0;
        string res;
        while(i>=0||j>=0||sum!=0)
        {
            if(i>=0)
            {
                sum+=a[i]-'0';
            }
            if(j>=0)
            {
                sum+=b[j]-'0';
            }
            res.push_back(char(sum%2+'0'));
            sum/=2;
            i--;
            j--;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

