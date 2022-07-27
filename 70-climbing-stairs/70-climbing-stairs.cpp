class Solution {
public:
      
//     int foo(int n , vector<int>&a)
//     {
//         if(n==0)return 1;
//         else if(n<0) return 0;
//         if(a[n]>0){return a[n];}
//         int n1 = foo(n-1 ,a);
//         int n2= foo(n-2 ,a);
//         int np = n1+n2;
//         a[n] = np;
//         return np;
            
        
//     }
    // int climbStairs(int n) 
    // {
    //     vector<int>a(n+1,0);
    //     int ans = foo(n,a);
    //     return ans;
    // }
    
    
    int climbStairs(int n) 
    {
        int dp[n+1];
        dp[0]=1;
        for(int i=1;i<=n;i++)
        {
            if(i==1){
                dp[i] = dp[i-1];
            }
            else
            {
                dp[i] = dp[i-1]+dp[i-2];
            }
        }
        return dp[n];
        
    }
};