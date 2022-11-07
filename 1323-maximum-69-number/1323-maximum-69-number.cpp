#include <sstream>
class Solution {
public:
    int maximum69Number (int num) {
         ostringstream str1;
         str1 << num;
        string g = str1.str();
        for(int i=0;i<g.size();i++)
        {
            if(g[i]=='6')
            {
                g[i]='9';
                break;
            }
        }
        stringstream geek(g);
        int x = 0;
        geek >> x;
        return x;
    }
};