class Solution {
public:
    int findMin(vector<int>& a) 
    {
        int x = *min_element(a.begin(), a.end());
        return x;
    }
};