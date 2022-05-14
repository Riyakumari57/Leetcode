class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        set<int> s;
        
        for (int i = 0; i < nums.size(); i++)
        {
          /* code */
          s.insert(nums[i]);
          
        }
        nums.clear();
         set<int, greater<int> >::iterator itr;
        for (itr = s.begin(); itr != s.end(); itr++) 
        {
       nums.push_back(*itr);
         }
//           for (int i = 0; i < s.size(); i++)
//         {
//           /* code */
//          nums[i] = s[i];
          
//         }
        return s.size();
    }
};