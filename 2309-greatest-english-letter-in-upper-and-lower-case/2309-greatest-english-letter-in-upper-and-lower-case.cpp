class Solution {
public:
    string greatestLetter(string s) 
    {
       sort(s.begin(), s.end(), [](const char& a, const char& b) {
    if (std::tolower(a) == std::tolower(b))
      return a > b;
    else
      return std::tolower(a) < std::tolower(b);
  });
       string str="";
       // cout<<char('E'+32)<<endl;
        
        for(int i=s.length()-1;i>0;i--)
        {
            if(char(s[i]+32)==s[i-1])
            {
                str+=s[i];
                break;
            }
        }
        return str;
        
    }
    
    
};