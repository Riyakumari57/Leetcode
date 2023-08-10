class Solution {
public:
    bool search(vector<int>& v, int elem)
    {
         if(std::find(v.begin(), v.end(), elem) != v.end())
     {
             //elem exists in the vector
             return true;
             
     } 
        else
            return false;
    }
};