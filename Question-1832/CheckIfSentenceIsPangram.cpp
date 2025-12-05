class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> freq(26,false);
        for(char a:sentence){
            freq[a-'a']=true;
        }
        for(bool a:freq){
            if(!a) return false;
        }
        return true;
    }
};