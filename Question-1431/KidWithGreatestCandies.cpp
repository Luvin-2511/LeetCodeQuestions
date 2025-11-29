class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int extraCandies) {
        int n = c.size();
        int max = INT_MIN;
        vector<bool>ans;
        for(int i = 0;i<n;i++){
            if(c[i]>max) max=c[i];
        }
        for(int cand:c){
            if(cand+extraCandies>=max) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};