#define ll long long int
class Solution {
public:
    int arrangeCoins(int n) {
        vector<long long int>v;
      long long  int x = 1 , y=2;
        v.push_back(1);
        while(1)
        {
           
            x = y+x;
             if(x>n)
            {
                 x = y+x;
                v.push_back(x);
                break;
            }
            v.push_back(x);
            y++;
            
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==n) return i+1;
            else if(v[i]>n) return i;
        }
        return 0;
    }
};