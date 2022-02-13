class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>>v;
        int n = nums.size();
        int ps = pow(2,n); //power_set_size
        
        for(int i=0;i<ps;i++)
        {
            vector<int>vv;
            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                    vv.push_back(nums[j]);
            }
            v.push_back(vv);
        }
        return v;
    }
};