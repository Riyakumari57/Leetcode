class Solution {
public:
    string getSmallestString(int n, int k) 
    {
        char ch = 'a';
        string ss ="";
        // map<char,int>mp;
        //  for(int i=0;i<26;i++)
        //  {
        //      mp[ch++] = i+1;;
        //  }
        // for(auto x :mp)
        // {
        //     cout<<" x. first "<<x.first<<" "
        //         <<"x.second "<<x.second<<endl;
        // }
        // return ss;
        for(int i=0;i<n;i++)
            ss+='a';
        k=k-n;
        for(int i=n-1;i>=0;i--)
        {
            if(k==0)
                break;
            else if(k<25)
            {
                ss[i] = (char)('a'+k);         
                k=0;
            }
            else{
                ss[i] = (char)('a'+25);
                k = k - 25;
            }
        }
        return ss;
    }
};