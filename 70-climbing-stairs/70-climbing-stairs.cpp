class Solution {
public:
      
    int foo(int n , vector<int>&a)
    {
        if(n==0)return 1;
        else if(n<0) return 0;
        if(a[n]>0){return a[n];}
        int n1 = foo(n-1 ,a);
        int n2= foo(n-2 ,a);
        int np = n1+n2;
        a[n] = np;
        return np;
            
        
    }
    int climbStairs(int n) 
    {
        vector<int>a(n+1,0);
        int ans = foo(n,a);
        return ans;
    }
};