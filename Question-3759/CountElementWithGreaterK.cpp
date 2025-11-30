class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char>ans;
        for(char c:s){
            ans.insert(c);
        }
        int count = 0;
        for(char a:ans){
            count++;
        }
        return count;
    }
};