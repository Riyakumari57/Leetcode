class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        int cnt = 1 , var = 0;
        sort(nums.begin(),nums.end());
       for(int i=0;i<n;i++)
       {
           if(i!=n-1)
           {
               if(nums[i]==nums[i+1]){
               
               cnt++;
               var = nums[i];
           }
           else cnt=1;
           
           }
           
           if(cnt>n/2)
               return var;
       }
        
        return 0;
        
    }
};