class Solution {
public:
    vector<int> majorityElement(vector<int>& nums)
    {
        int n = nums.size();
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<int>v;
        for(auto x : mp)
        {
            if(x.second>n/3)
                v.push_back(x.first);
        }
        return v;
    }
};