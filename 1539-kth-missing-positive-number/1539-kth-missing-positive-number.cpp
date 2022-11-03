class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        int cnt = 0;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int x = arr[n-1];
       map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        
        for(int i=0;i<x;i++)
        {
            if(mp[i+1]==0) {
                cnt++;
                if(cnt==k)
                {
                    int ans = i+1;
                    return ans;
                }
            }
        }
        int y =0;
        while(cnt<=k)
        {
            y = x++;
            cnt++;
        }
        return y;
        
    }
};