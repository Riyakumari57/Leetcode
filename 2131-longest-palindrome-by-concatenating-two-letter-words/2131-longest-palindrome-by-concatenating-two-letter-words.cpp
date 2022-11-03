

class Solution {
public:
    int longestPalindrome(vector<string>& words) 
    {
//         int f = 0,cnt=0;
//         int n = words.size();
//         map<string , int>mp;
//         for(int i=0;i<n;i++)
//         {
//             mp[words[i]]++;
//         }
//         int sum = 0;
//         for(auto x : mp)
//         {
            
//                string str = x.first;
//                 string str2 = str;
//                 reverse(str.begin(),str.end());
//                 if (str==str2 && x.second>1 )
//                  {
//                          cnt += x.second*2;
//                          mp[str]--;
//                  }
//                 else if (str==str2 && x.second>0 )
//                  {
//                          sum = 2;
//                          mp[str]--;
//                  }
                 
//                  else if(mp[str]!=0 && str!=str2)
//                  {
//                     if(mp[str]==mp[str2])
//                     {
//                         int add = mp[str]+mp[str2];
//                         cnt = cnt+(add*2);
//                     }
//                     else
//                     {
//                         int a = min(mp[str] , mp[str2]) ;
//                         a = 2*a;
//                         cnt+= a*2;
//                     }
//                      mp[str]--;
//                      mp[str2]--;
//                   }
//             }
//            cnt+=sum;
//         return cnt;
//     }
        
         int count[26][26] = {}; 
       int ans =0;
        
			for(auto w : words){
				int a = w[0] - 'a';
				int b = w[1] - 'a'; 

				if(count[b][a]){
					ans+= 4;          
					count[b][a]--;   // decrement the count as we found mirror word
				}else
					count[a][b]++;  //increment the current word count if we not find any mirror word
			}
        
			for(int i=0;i<26;i++){
				if(count[i][i]){
					ans+=2;
					break;
				}
			 }
      
	return ans;
   

	}
};