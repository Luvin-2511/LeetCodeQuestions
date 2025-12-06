class Solution {
public:
    string reverseOnlyLetters(string s) {
        string rev="";
        for(int i = s.length()-1;i>=0;i--){
            if(isalpha(s[i])) rev+=s[i];
        }
        string ans = "";
        int j = 0;
        for(int i = 0;i<s.length();i++){
            if(isalpha(s[i])){
                ans+=rev[j++];
            }else{
                ans+=s[i];
            }
        }
        return ans;
    }
};