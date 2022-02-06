class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        vector<int>v;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
         int cnt = 0;
        
        for(auto x : mp)
        {
           if(x.second==1)
           {
               v.push_back(x.first);
               cnt++;
           }
            else
            {
                cnt+=2;
                v.push_back(x.first);
                v.push_back(x.first);
                
            }
           
        }
        
        nums = v;
        return cnt;
        
        
    }
};