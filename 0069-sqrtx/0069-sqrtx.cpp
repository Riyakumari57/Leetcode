class Solution {
public:
    int mySqrt(int num) {
         if(num==1) return true;
       long long int l = 1;
       long long int h = num;
        while(l<=h)
        {
           long long int mid = l+(h-l)/2;
            if(mid*mid == num) return mid;
            else if(mid*mid < num)
            {
                l = mid+1;
            }
            else
            {
                h = mid-1;
            }
        }
        return h;
    }
};