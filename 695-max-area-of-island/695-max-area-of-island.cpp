class Solution {
public:
    int dfs(int i, int j, int n, int m, vector<vector<int>>& a){
        if(i<0 || i>=n || j<0 || j>=m || a[i][j]==0) return 0;
        a[i][j]=0;
        return 1+dfs(i,j+1,n,m,a)+dfs(i,j-1,n,m,a)+dfs(i+1,j,n,m,a)+dfs(i-1,j,n,m,a);
    }
    int maxAreaOfIsland(vector<vector<int>>& a) {
        int ans=0;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                if(a[i][j]==1){
                    ans=max(ans, dfs(i,j,a.size(),a[0].size(),a));
                }
            }
        }
        return ans;
    }
};