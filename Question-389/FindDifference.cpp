class Solution {
public:
    char findTheDifference(string s, string t) {
        int frq[26]={0};
        for(char a:s){
            frq[a-'a']++;
        }
        for(char b:t){
            frq[b-'a']--;
        }
        for(int i=0;i<26;i++){
            if(frq[i]!=0){
                return i+'a';
            }
        }
        return -1;
    }
};