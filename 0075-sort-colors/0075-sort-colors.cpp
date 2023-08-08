class Solution {
public:
    void sortColors(vector<int>& a) 
    {
         int low = 0;
        int mid = 0;
        int high = a.size()-1;
        while (mid <= high) 
        {
        switch (a[mid]) 
        {
 
        // If the element is 0
        case 0:
            swap(a[low++], a[mid++]);
            break;
 
        // If the element is 1 .
        case 1:
            mid++;
            break;
 
        // If the element is 2
        case 2:
            swap(a[mid], a[high--]);
            break;
        }
      }
    }
};