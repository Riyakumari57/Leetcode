class Solution {
public:
//     bool isVowel(char ch)
//     {
//     string str = "aeiouAEIOU";
//     return (str.find(ch) != string::npos);
//      }
//     string reverseVowels(string s) {
//         int n = s.size();
//         vector<bool>v(n,false);
//         int val = n-1;
//         for(int i=0;i<n;i++)
//         {
//             if(isVowel(s[i]) && v[i]==false){
                
//                  for(int j = val; j>=0;j--)
//                  {
//                      if(isVowel(s[i]) && isVowel(s[j]) && v[i]==false && v[j]==false){
//                          v[i] = true;
//                          v[j] = true;
//                         swap(s[i],s[j]);
//                          val = j-1;
//                        }
//                  }
//             }
          
              
//         }
//          return s;
//     }
    
    
    
        string reverseVowels(string s) {
        int i = 0, j = s.size() - 1;
        while (i < j) {
            i = s.find_first_of("aeiouAEIOU", i);
            j = s.find_last_of("aeiouAEIOU", j);
            if (i < j) {
                swap(s[i++], s[j--]);
            }
        }
        return s;
    }

};