class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[26]={0};
        for(char a :s){
            freq[a-'a']++;
        }
        for(char b :t){
            freq[b-'a']--;
        }
        for(int i = 0;i<26;i++){
            if(freq[i]!=0){
                return false;
            }

        }
        return true;
    }
};