class Solution {
public:
    int maxArea(vector<int>& a) 
    {
         //int max=0;
        int i=0;
        int j=a.size()-1;
        int ans = 0;
       // cout<<" height is "<<j<<endl;
        while(i<j)
        {
             int x = min(a[i],a[j]) * (j-i);
            ans = max(ans,x);
            if(a[i]<=a[j])i++;
            else if(a[i]>a[j]) j--;
        }
        return ans;
    }
};