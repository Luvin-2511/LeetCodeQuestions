class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int maxsum = 0,minsum = 0;
        int i =0;
        while(i<k){
            maxsum+=nums[(nums.size()-1)-i];
            minsum+=nums[i];
            i++;
        }
        return abs(maxsum-minsum);
    }
};