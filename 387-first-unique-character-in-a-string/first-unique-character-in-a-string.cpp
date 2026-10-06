class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        unordered_map<char,int>ump;
        int i;
        for(i=0;i<n;i++){
            ump[s[i]]++;
        }
        for(i=0;i<n;i++){
            if(ump[s[i]]==1)
            return i;
        }
        return -1;
    }
};