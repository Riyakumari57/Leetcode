class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
         int last = -1;
        int first = -1;
        int l = 0;
        vector<int>v;
        int h = nums.size()-1;
        
        
        //First occurence;
        while(l<=h)
        {
            int mid = l  + (h-l)/2;
            if(nums[mid]==target)
            {
                first = mid ;
                h = mid-1;
            }
           else if(nums[mid]<target)
            {
                l = mid+1;
            }
            else
            {
                h = mid -1;
            }
        }
        v.push_back(first);
        
        
          //Last occurence;
         l = 0;
          h = nums.size()-1;
     //   cout<<"LAST"<<endl;
        while(l<=h)
        {
             //cout<<"l is "<<l<<endl;
            int mid = l  + (h-l)/2;
           // cout<<"mid is "<<mid<<endl;
            if(nums[mid]==target)
            {
                last = mid ;
                l = mid+1;
             // cout<<"l is "<<l<<endl;
            }
           else if(nums[mid]<target)
            {
                l = mid+1;
            }
            else
            {
                h = mid -1;
            }
        }
        v.push_back(last);
        return v;
    }
};