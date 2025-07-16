class Solution {
public:
    bool isValid(string word) {
        if(word.length()<3) return false;
        bool isVowel = false;
        bool isConsonant = false;

        for(char ch: word){
            if(!isalnum(ch)) return false;

            if(isalpha(ch)){
                char lower = tolower(ch);
                if(lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u'){
                    isVowel=true;
                }else{
                    isConsonant = true;
                }

            }

        }
        return isVowel && isConsonant;
    }
};