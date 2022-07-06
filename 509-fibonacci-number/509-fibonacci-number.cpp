class Solution {
public:
    int foo(int n, unordered_map<int, int> &umap)
    {
          if(n==0 || n==1) return n;
         //recursive case
        
         int curKey = n;
            if (umap.find(curKey) != umap.end() )
               return umap[curKey];
        
        
       int a =  foo(n-1, umap);
        int b = foo(n-2,umap);
        
         umap[curKey] =a+b;
        return a+b;
    }
    int fib(int n) 
    {
         unordered_map<int, int> umap;
         int z = foo(n,umap);
        return z;
    }
};