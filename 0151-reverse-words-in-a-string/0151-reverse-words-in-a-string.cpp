class Solution {
public:
    string reverseWords(string str) 
    {
         reverse(str.begin(), str.end());
         string ans , s;
        bool flag = false;
        if(str[0]==' ')flag = true;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]==' '&& flag==true)continue;
            else {
                flag = false;
           s.push_back(str[i]);
            if(str[i]==' ' || i==str.size()-1)
           {
            if(str[i]==' '){
                flag = true;
            reverse(s.begin(), s.end()-1);
            } else 
            reverse(s.begin(), s.end());
            ans+=s;
            s.clear();
             }
            }
    }
        if(flag==true)ans.pop_back();
        
    return ans; 
    }
};