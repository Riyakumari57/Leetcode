class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) 
    {
        vector<vector<int>>vv;
        vector<int>v;
        if(in.size()==1){
            v.push_back(in[0][0]);
            v.push_back(in[0][1]);
            vv.push_back(v);
            return vv;
        }
         
//           sort(in.begin(),in.end());
//           int start = in[0][0];
//           int end = in[0][1];
//           cout<<start<<" "<<end<<endl;
//           for(int i= 1;i<in.size();i++)
//           {
//               vector<int>ans;
//                   if(in[i][0]<=end){
//                   end = max(in[i][1],end);
//                   }
//                   else{
//                       ans.push_back(start);
//                       ans.push_back(end);
//                       vv.push_back(ans);
//                       start = in[i][0];
//                       end = in[i][1];
//                       if(i==in.size()-1)
//                       {
//                           ans.clear();
//                            ans.push_back(start);
//                           ans.push_back(end);
//                           vv.push_back(ans);
//                           return vv;
//                       }
//                   }
                 
                       

//           }
//                         v.push_back(start);
//                          v.push_back(end);
//                           vv.push_back(v);
//           return vv;
        
         sort(in.begin(),in.end());
        int start = in[0][0];
        int end = in[0][1];
        for(int i=1;i<in.size();i++)
        {
            vector<int>ans;
             if(in[i][0]<=end)
             {
                 end = max(in[i][1] , end); 
             }
            else{
                ans.push_back(start);
                ans.push_back(end);
                vv.push_back(ans);
                start = in[i][0];
                end = in[i][1];
                
                if(i==in.size()-1)
                {
                    ans.clear();
                    ans.push_back(start);
                    ans.push_back(end);
                    vv.push_back(ans);
                    return vv;
                }
            }
        }
        v.push_back(start);
        v.push_back(end);
        vv.push_back(v);
        return vv;
    }
};