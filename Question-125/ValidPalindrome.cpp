class Solution {
public:
    bool isAplha(char a){
        if(tolower(a)>='a' && tolower(a)<='z' && a>='0' && a<='9'){
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int n=s.length();
        int st=0,end=s.length()-1;
        while(st<end){
            if(!isAlpha(s[st])){
                st++;
                continue;
            }
            if(!isAlpha(s[end])){
                end--;
                continue;
            }
            if(tolower(s[st])!=tolower(s[end])){
                return false;
            }
        }
        return true;
    }
}