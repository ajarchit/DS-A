class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        bool flag=false;
        int c=0;
        int j=n-1;
        for(int i=n-1;i>=0;i--)
        {
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            flag = true;
                c=c+1;
            }
              else {
            if (flag == true)
                return c;
        }
        }
        return c;
    }
};