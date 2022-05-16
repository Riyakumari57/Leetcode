class Solution {
public:
   
//         vector<int>v;
//         unordered_map<int,int>m;
//         int n = nums.size();
//         for(int i=0;i<n;i++)
//         {
//           m[nums[i]] = i;
//         }
        
//          for(int i=0;i<n;i++)
//         {
//             if(m.count(target-nums[i]) && m[target-nums[i]]!=i)
//             {
//                 v.push_back(i);
//                 v.push_back(m[target-nums[i]]);
//                  return v;
//             }
//         }
//         return v;
       
    
    
        
        
     vector<int> twoSum(vector<int>& nums, int target)
    {    
        vector<int>vv;
       unordered_map<int,int>mp;
         for(int i=0;i<nums.size();i++)
         {
             mp[nums[i]]=i;
         }
          for(int i=0;i<nums.size();i++)
          {
               if (mp.count(target-nums[i]) != 0 && mp[target-nums[i]]!=i)
               {
                       vv.push_back(i);
                       vv.push_back(mp[target-nums[i]]);
                       return vv;
               }
          }
         return vv;
    }
};

        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
   