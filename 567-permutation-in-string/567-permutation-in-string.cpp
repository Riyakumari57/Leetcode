class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        if(s2.size()<s1.size())
             return false;
         int n = s1.size();
        map<char,int>mp1;
        
        for(int i=0;i<s1.size();i++)
        {
            mp1[s1[i]]++;
        }
        map<char,int>mp2;
        
        
        for(int i=0;i<n;i++)
        {
            mp2[s2[i]]++;
        }
        
        if(mp1==mp2)
            return true;
       
        
         for(int i=n;i<s2.size();i++)
         {
             mp2[s2[i-n]]--;
             if( mp2[s2[i-n]]==0)
             {
                 mp2.erase(s2[i-n]);
             }
            mp2[s2[i]]++;
              
          if(mp1==mp2)
            return true;
         }
        return false;
    }
};