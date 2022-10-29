class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int>mp;
        for(int i =0 ; i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto x : mp)
        {
            if(x.second > n/2) {
              //  cout<<x.second<<" "<<n/2;
                return x.first;
            }
        }
        return 0;
    }
};