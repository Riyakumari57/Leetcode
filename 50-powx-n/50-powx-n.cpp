class Solution {
public:
         
 
    double myPow(double x, long long int y)
    {
          double res = 1.00000000000000; 
         if (x == 0) return 0;
        if(y<0)
        {
            x = 1/x;
            y = y*(-1);
        }
        while (y > 0)
       {
            if (y & 1)
                res = (res*x);
             y = y>>1;
             x = (x*x);
        }
       return res;
    }
};