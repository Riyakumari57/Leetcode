class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        
         vector< pair <int,int> > vect;
         for(int i = 0 ; i < matrix.size() ; i ++){
             for(int j = 0  ; j < matrix[0].size() ; j++){
                   if(matrix[i][j] == 0){
                 vect.push_back({i , j});
               }
             }
            
         }
        
         for(int i = 0 ; i < matrix.size() ; i ++){
             for(int j = 0  ; j < matrix[0].size() ; j++){
                   for(int k = 0 ;k <vect.size();k++)
                {
                   
                     if(i== vect[k].first)
                     {
                         matrix[i][j]=0;
                     }
                     if(j==vect[k].second)
                     {
                           matrix[i][j]=0;
                     }
                }
             }
         }
    }
};