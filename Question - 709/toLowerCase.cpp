class Solution {
public:
    string toLowerCase(string s) {
        for(char &a:s){
            a=tolower(a);
        }
        return s;
    }
};