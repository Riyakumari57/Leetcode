class Solution {
public:
  vector<int> countBits(int n)
{
   
    vector<int> v;
    v.push_back(0);
    for (int i = 1; i <= n; i++)
    {
         int cnt = 0;
         int num =i;
        while (num > 0)
        {
            if ((num & 1) > 0)
            {
                cnt++;
            }
            num = num >> 1;
        }
        v.push_back(cnt);
    }

    return v;
}
};