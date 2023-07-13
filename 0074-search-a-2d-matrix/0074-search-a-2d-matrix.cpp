class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int x) 
    {
        int m= matrix.size();
        int n= matrix[0].size();
        int c=matrix[0][n-1];
        int i=0,j=n-1;
        while(i<m && j>=0)
        {
         if(matrix[i][j]>x)
         {
             j--;
         }
            else if(matrix[i][j]<x)
            {
                i++;
            }
            else if(matrix[i][j]==x)
                return true;
        }
        return false;
    }
};