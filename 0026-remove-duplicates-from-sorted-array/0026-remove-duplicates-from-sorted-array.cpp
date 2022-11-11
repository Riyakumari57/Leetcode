class Solution {
public:
    int removeDuplicates(vector<int>& arr) 
    {
        
        int n = arr.size();
        int i = 0, j = 1;
        
        while(j<n)
        {
            if(arr[i]<arr[j])
            {
                i++;
                arr[i] = arr[j];
                // for(int i=0;i<n;i++)
                // {
                //     cout<<arr[i]<<" ";
                // }
                // cout<<endl;
            }
          j++;
        }
        return i+1;
    }
};