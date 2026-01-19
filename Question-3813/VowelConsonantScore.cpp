class Solution {
public:
    int vowelConsonantScore(string s) {
        int n = s.length();
        int vowel = 0;
        int cons = 0;
        for(char c:s){
            if(isalpha(c)){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                vowel++;
            }else {
                cons++;
            }
            }
        }
        if(cons == 0) return 0;
        return vowel/cons;
    }
};