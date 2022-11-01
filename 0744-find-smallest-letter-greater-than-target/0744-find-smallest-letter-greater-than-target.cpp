class Solution {
public:
    char nextGreatestLetter(vector<char>& letter, char target) {
        
        for(int i = 0 ; i<letter.size();i++)
        {
            if(target<letter[i]){
                char c = letter[i];
                return c;
            }
                
        }
        
        
        return letter[0];
        
    }
}; 