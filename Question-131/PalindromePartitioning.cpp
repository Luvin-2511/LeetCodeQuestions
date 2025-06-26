class Solution {
public:
    bool isPali(string s){
        string copy=s;
        reverse(copy.begin(),copy.end());
        return copy==s;
    }
    void getAllparts(string s,vector<string>& partition,vector<vector<string>>&ans){
        if(s.size()==0){
            ans.push_back(partition);
            return;
        }


        for(int i=0;i<s.size();i++){
            string part=s.substr(0,i+1);
            if(isPali(part)){
                partition.push_back(part);
                getAllparts(s.substr(i+1),partition,ans);
                partition.pop_back();
            }
        }
    }


    vector<vector<string>> partition(string s) {
        vector<string> partition;
        vector<vector<string>>ans;
        getAllparts(s,partition,ans);
        return ans;
    }
};