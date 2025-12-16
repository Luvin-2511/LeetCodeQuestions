class Solution {
public:
    bool halvesAreAlike(string s) {
        int c1 = 0;
        int c2 = 0;
        for(int i = 0; i < (s.length())/2; i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
               s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') c1++;
        }
        for(int i = (s.length())/2; i < s.length(); i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
               s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') c2++;
        }
        return c1 == c2;
    }
};