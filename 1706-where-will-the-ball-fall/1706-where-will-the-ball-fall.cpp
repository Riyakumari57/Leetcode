class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        
        vector<int>ans(m);
        
        for(int j=0;j<m;j++)
        {
            int cp = j ;
            int np = -1;
            
            for(int i = 0 ; i <n ; i ++)
            {
                np = cp + grid[i][cp];
                 
                if(np < 0 || np>=m || grid[i][cp] != grid[i][np])
                {
                    cp = -1;
                    break;
                }
                cp = np ;
            }
            ans[j] = cp;
        }
        return ans;
    }
};