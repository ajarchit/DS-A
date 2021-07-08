#include<bits/stdc++.h>
using namespace std;
 string longestCommonPrefix(vector<string>& str) {
        sort(str.begin(),str.end());
        string ans="";
        int n=str.size();
        for(int i=0;i<str[0].length();i++){
            if(str[0][i]==str[n-1][i])
                ans+=str[0][i];
            else break;
        }
        return ans;
    }
    int main()
    {
        int n;
        string temp;
        cin>>n;
        vector <string> s;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            s.push_back(temp);
        }
        string sol=longestCommonPrefix(s);
        cout<<sol<<endl;

    }
