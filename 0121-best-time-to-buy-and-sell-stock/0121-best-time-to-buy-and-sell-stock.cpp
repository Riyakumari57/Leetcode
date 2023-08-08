class Solution {
public:
    int maxProfit(vector<int>& p) 
    {
        // int n = p.size();
        // vector<int>v(n,0);
        // v[n-1]=p[n-1];
        // for(int i=n-2;i>=0;i--)
        // {
        //    if(p[i]>=v[i+1])
        //    v[i]=p[i];
        //    else v[i] = v[i+1];
        // }
        // int maxx = 0;
        // for(int i =0;i<n;i++)
        // {
        //     int diff = v[i] - p[i];
        //     maxx = max(diff,maxx);
        // }
        // return maxx;
        
        int n   = p.size();
        vector<int>maxPrice(n);
        int maxx = INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            if(p[i]>maxx) {
                maxx = p[i];
                maxPrice[i] = maxx;
            }
              else{
             maxPrice[i] = maxx;
           }
        }
        int profit =0;
        for(int i=0;i<n;i++)
        {
            int diff = maxPrice[i] - p[i];
            profit = max(diff , profit);
        }
        return profit ;
      
    }
};