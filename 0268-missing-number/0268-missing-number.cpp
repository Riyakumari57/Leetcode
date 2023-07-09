class Solution {
public:
    int missingNumber(vector<int>& nums)
     {
        // sort(nums.begin(),nums.end());
        // int ans = 0;
        // for(int i =0;i<nums.size();i++)
        // {
        //     if(nums[i]!=i)
        //     {
        //         ans = i;
        //         return ans;
        //     }
        // }
        // return nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=i)
            {
                int ans = i;
                return i;
            }
        }
        return nums.size();
    }
    
};