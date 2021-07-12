class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<j)
        {
            if((tolower(s[i])>='a' && tolower(s[i])<='z' || tolower(s[i])>='0'&& tolower(s[i])<='9')||
              (tolower(s[j])>='a' && tolower(s[j])<='z' || tolower(s[j])>='0'&& tolower(s[j])<='9'))
            {
                if((tolower(s[i])>='a' && tolower(s[i])<='z' || tolower(s[i])>='0'&& tolower(s[i])<='9')&&
              (tolower(s[j])>='a' && tolower(s[j])<='z' || tolower(s[j])>='0'&& tolower(s[j])<='9'))
                {
                    if(tolower(s[i])!=tolower(s[j]))
                    return false;
                    else
                    {
                        i++;
                        j--;
                    }
                }
                else if(tolower(s[i])>='a' && tolower(s[i])<='z' || tolower(s[i])>='0'&& tolower(s[i])<='9')
                {
                    j--;
                }
                else
                {
                    i++;
                }
                
            }
            else
            {
                i++;
                j--;
            }
        }
        return true;
        
    }
};
