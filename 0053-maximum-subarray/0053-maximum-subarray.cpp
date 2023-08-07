class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        //Initializing Maxsum variable = INT_MIN;
         int maxsum = INT_MIN;
        
          int cursum =0; //Temp variable Currsum (currentsum)
        for(int i=0;i<nums.size();i++)
        {
            cursum+=nums[i];  //Taking sum normally by accessing each element
            
            if(cursum>maxsum) 
            {
                // If our current sum is maximum than the maxsum then                                store in maxsum
                maxsum=cursum;
                cout<<maxsum<<endl;
            }
            
            if(cursum<0)
            {
                //If our currsum becomes less than zero aka negative then when                    will  again start from zero because taking that sum will                        decrease currsum.
                cursum=0;
            }
        }
        return maxsum;
    }
};