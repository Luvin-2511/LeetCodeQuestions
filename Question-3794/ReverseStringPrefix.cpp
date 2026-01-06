class Solution {
public:
    string reversePrefix(string s, int k) {
        int start = 0;
        int end = k-1;
        while(start<end){
            int temp = s[start];
            s[start]=s[end];
            s[end]=temp;
            start++;
            end--;
        }
        return s;
    }
};