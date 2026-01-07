class Solution {
public:
    string largestEven(string s) {
        int len = s.length();
        for(int i =len-1;i>=0;i--){
            int num = s[i]-'0';
            if(num%2==0){
                return s.substr(0,i+1);
            }
        }
        return "";
    }
};