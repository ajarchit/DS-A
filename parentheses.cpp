class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        bool b;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
                stack.push_back(s[i]);
            else if(s[i]==')'||s[i]==']'||s[i]=='}')
            {
               b=stack.empty();
                if(b==true)
                    return false;
                else if(s[i]==')'&&stack.back()=='(')
                    stack.pop_back();
                else if(s[i]==']'&&stack.back()=='[')
                    stack.pop_back();
                else if(s[i]=='}'&&stack.back()=='{')
                    stack.pop_back();
                else 
                    return false;
                
            }
        }
        b=stack.empty();
        return b;
            
    }
};