class Solution {
public:
    int maxProfit(vector<int>& v)
    {
        int n =v.size();
         int max[n];
        for(int i=n-1;i>=0;i--)
        {
            if(i==(n-1))
            max[i] = v[i];
            else
            {
                if(max[i+1]>v[i])
                {
                    max[i] = max[i+1];
                }
                else max[i] = v[i];
            }
        }
        int maxx = INT_MIN;
        for(int i=0;i<n;i++)
        {
             if(max[i]-v[i]>maxx)
             {
                 maxx = max[i]-v[i];
             }
        }
        return maxx;
       // cout<<endl;
        return 0;
    }
};