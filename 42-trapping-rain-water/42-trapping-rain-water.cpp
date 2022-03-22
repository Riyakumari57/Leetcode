class Solution {
public:
    int trap(vector<int>& a)
    {
        vector<int>l, r;
        int lm =INT_MIN , rm =INT_MIN;
        for(int i =0;i<a.size();i++)
        {
                if(a[i]>lm)
                    lm=a[i];
            l.push_back(lm);
        }
        
       // cout<<"left"<<endl;
        
//          for(int i=0;i<l.size();i++)
//         {
//            cout<<l[i]<<" ";
//         } 
        
//         cout<<endl;
       //  cout<<"right"<<endl;
        for(int i =a.size()-1;i>=0;i--)
        {
                if(a[i]>rm)
                    rm=a[i];
            r.push_back(rm);
        }
        
          reverse(r.begin(), r.end());
        
//            for(int i=0;i<r.size();i++)
//         {
//            cout<<r[i]<<" ";
//         } 
        
//         cout<<endl;
        
        int sum = 0;
        for(int i=0;i<a.size();i++)
        {
            sum  += min(l[i],r[i]) - a[i];
        }
        return sum;
    }
};