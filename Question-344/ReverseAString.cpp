class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0,end=s.length()-1;
        for(int i=0;i<s.length();i++){
            swap(s[st++],s[end--]);
        }
    }
}