class Solution {
public:
    string convertToTitle(int columnNumber) {
        int n,temp,temp1,k=columnNumber;
        string s="";
        while(k)
        {
            temp=(k-1)%26;
           
            s.insert(s.begin(),(65+temp));
             k=(k-1)/26;
        }
        return s;
    }
};