class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int start = 0;
        int end = n-1;
        unordered_set<int> ans;
        while(start<end){
            double avg = (nums[start]+nums[end])/2.0;
            ans.insert(avg);
            start++;
            end--;
        }
        return ans.size();
    }
};