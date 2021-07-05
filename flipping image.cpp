class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        int i,j,temp,n=image.size();
        for(i=0;i<image.size();i++){
               for(j=0;j<image.size()/2;j++)
            {
                temp=image[i][j];
                image[i][j]=image[i][n-j-1];
                image[i][n-j-1]=temp;
            }
            for(int j=0;j<image.size();j++){
                image[i][j]=1-image[i][j];
            }
        }
        return image;
    }
};