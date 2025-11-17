class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int counta = 0;
        int countb = 0;
        for(int i =0;i<s.length();i++){
            if(s[i]=='a'){
                counta++;
            }
            if(s[i]=='b'){
                countb++;
            }
        }
        return counta>countb?counta-countb:countb-counta;
    }
};