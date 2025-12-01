class Solution {
public:
    bool backspaceCompare(string s, string t) {
        return remover(s)==remover(t);
    }
    string remover(string a){
        string ans = "";
        for(char c : a){
            if(c=='#'){
                if(!ans.empty()) ans.pop_back();
            }else{
                ans.push_back(c);
            }
        }
        return ans;
    }
};