class Solution {
public:
    int findPairs(vector<int>& nums, int target)
    {
           vector<int>vv;
           map<int,int>mp;
           for(int i=0;i<nums.size();i++)
           {
             mp[nums[i]]=i;
           }
           int cnt =0;
          for(int i=0;i<nums.size();i++)
          {
               if (count(vv.begin(), vv.end(), nums[i]))
               {
                  continue;
                }
              else
              {
               if (mp.count(target+nums[i]) != 0 && mp[target+nums[i]]!=i)
               {
                   vv.push_back(nums[i]);
                   //cout<<"nums i is "<<nums[i]<<endl;
                       cnt++;
               }
              }
          }
          return cnt ;
    }
};