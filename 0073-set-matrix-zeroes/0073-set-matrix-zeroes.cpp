class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
         vector< pair <int,int> > vect;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j =0;j<matrix[i].size();j++)
            {
                  if(matrix[i][j]==0)
                  {
                      vect.push_back(make_pair(i,j));
                  }
            }
        }
         
         for(int i=0;i<matrix.size();i++)
        {
            for(int j =0;j<matrix[i].size();j++)
            {
                for(int k = 0 ;k <vect.size();k++)
                {
                   
                     if(i== vect[k].first)
                     {
                          //cout<< vect[k].first<<" "<<vect[k].second<<endl;
                         matrix[i][j]=0;
                     }
                     if(j==vect[k].second)
                     {
                           matrix[i][j]=0;
                     }
                }
                 
                
            }

        }



         for(int i=0;i<matrix.size();i++)
        {
            for(int j =0;j<matrix[i].size();j++)
            {
                cout<<matrix[i][j];
            }
        }

    }
};