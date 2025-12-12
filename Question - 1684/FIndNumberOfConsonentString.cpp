class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {\
        bool allowedChar[26] = {false};
        
        for(char c : allowed) {
            allowedChar[c - 'a'] = true;
        }

        int count = 0;

        for (const string &w : words) {
            bool ok = true;
            for (char c : w) {
                if (!allowedChar[c - 'a']) {
                    ok = false;
                    break;
                }
            }
            if (ok) count++;
        }
        return count;
    }
};
