class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
        int sum =0;
        int max = 0;
        unordered_map<int,int>mp;
        mp[0] = -1;
        for(int i=0;i<nums.size();i++)
        {
             if(nums[i]==0) sum+= -1;
             else sum+=1;
           //  if(mp.find(sum)==mp.end())
            if (mp.count(sum) == 0)  mp[sum] = i;
            else
             {
                 // cout<<" sum is "<<sum<<endl;
                 // cout<<"mp[sum]"<<mp[sum]<<endl;
                 int idx = mp[sum];
                 int len = i -idx;
                 if(len>max)
                     max = len;
             }
            
           
            
        }
        return max;
    }
};