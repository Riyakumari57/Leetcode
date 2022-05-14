class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {if(nums.size()==0 || nums.size()==1)
            return;
        int i=0, j=0, n=nums.size();
        while(i<n)
        {
            if(nums[i]!=0)
            {
               
                // for(int i=0;i<nums.size();i++)
                // {
                //     cout<<nums[i];
                // }
                // cout<<endl;
                swap(nums[i], nums[j]);
                j++;
            }
            i++;
             // cout<<"  i is "<<i;
             //    cout<<" j is "<<j<<endl;
                
        }
        // for(int i=0;i<nums.size();i++)
        //         {
        //             cout<<nums[i];
        //         }
    }
};