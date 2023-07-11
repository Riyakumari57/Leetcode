class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
//          int pt1 = 0 , pt2 =0 ;
//              while(pt2<n)
//              {
//                  if(nums1[pt1]>nums2[pt2])
//                {
//                  swap(nums1[i],nums2[i]);
//                  sort(nums2.begin(),nums2.end());
//                  pt1++;
//                }
//                else{
//                    pt1++;
//                }
//              }
             
//          }
        
        int ptr1= 0 , ptr2= 0;
        while(ptr2<n)
        {
            
            if(ptr1>=m)
            {
                nums1[ptr1]=nums2[ptr2];
                 ptr1++;
                ptr2++;
                continue;
            }
           else if(nums1[ptr1]>nums2[ptr2])
            {
                swap(nums1[ptr1],nums2[ptr2]);
                 sort(nums2.begin(),nums2.end());
                ptr1++;
            }
            else{
                ptr1++;
            }
        }
       
    }
};