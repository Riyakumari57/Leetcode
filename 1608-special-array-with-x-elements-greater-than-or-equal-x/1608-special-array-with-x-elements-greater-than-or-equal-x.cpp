class Solution {
public:
    int specialArray(vector<int>& arr) {
        int n = arr.size();
        vector<int> count(1001,0);
        for(int i = 0;i<n;i++){
            count[arr[i]]++;
        }
        int total = n;
        for(int i = 0;i<1001;i++){
            if(i == total) return i;
            total -= count[i];
        }
        return -1;
    }
};