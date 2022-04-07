class Solution {
public:
    int lastStoneWeight(vector<int>& nums)
    {
        priority_queue<int> mq;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            mq.push(nums[i]);
        }
        while(mq.size()>1)
        {
            int x = mq.top();
            mq.pop();
            int y = mq.top();
             mq.pop();
            if(x!=y) mq.push(x-y);
        }
         if (mq.empty())
         {
              return 0;
          }
        else
          {
              return mq.top();
            }
        
    }
};