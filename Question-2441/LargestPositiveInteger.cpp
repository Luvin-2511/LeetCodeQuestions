class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;
        int j =nums.size()-1;
        while(i<j){
            if(nums[j]==-nums[i]){
                return nums[j];
            }
            else if(nums[j]>-nums[i]){
                j--;
            }
            else {
                i++;
            }
        }
        return -1;
    }
};