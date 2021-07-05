class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int i,j,m,n,c=0;
        for(i=0;i<board.size();i++)
        {
            for(j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='R')
                {
                    m=i;
                    n=j;
                    break;
                }
            }
        }
        
        for(i=n-1;i>=0;i--)
        {
            if(board[m][i]=='B')
                break;
            if(board[m][i]=='p')
            {
                c++;
                break;
            } 
        }
        
        for(i=n+1;i<board[0].size();i++)
        {
            if(board[m][i]=='B')
                break;
            if(board[m][i]=='p')
            {
                c++;
                break;
            } 
        }
        
        for(i=m-1;i>=0;i--)
        {
            if(board[i][n]=='B')
                break;
            if(board[i][n]=='p')
            {
                c++;
                break;
            } 
        }
        
        for(i=m+1;i<board.size();i++)
        {
            if(board[i][n]=='B')
                break;
            if(board[i][n]=='p')
            {
                c++;
                break;
            } 
        }
        return c;
        
    }
};