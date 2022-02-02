class Solution {
public:
    vector<int> findAnagrams(string s, string p)
    {
        int n = s.size();
        int m =p.size();
        vector<int>v;
        map<char,int>mp1;
        for(int i=0;i<m;i++)
        {
            mp1[p[i]]++;
        }
         map<char,int>mp2;
        for(int i=0;i<=n;i++)
        {
             if(i<m)
             {
                 mp2[s[i]]++;
             }
            if(i==(m-1))
            {
                if(mp1==mp2)v.push_back(abs(m-(i+1)));
            }
            if(i>=m)
            {
                mp2[s[i]]++;
                mp2[s[i-m]]--;
                if(mp2[s[i-m]]==0)
                    mp2.erase(s[i-m]);
                if(mp1==mp2)v.push_back(abs(m-(i+1)));
            }
        }
        return v;
    }
};