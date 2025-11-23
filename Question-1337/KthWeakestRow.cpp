class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>ans;
        int m = mat.size();
        int n = mat[0].size();
        for(int i=0; i<m;i++){
            int count = 0;
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    count++;
                }else {
                    break;
                }
            }
            ans.push_back({count,i});
        }
            sort(ans.begin(),ans.end());
            vector<int>res;
            for(int i = 0;i<k;i++){
                res.push_back(ans[i].second);
            }
            return res;
    }
};