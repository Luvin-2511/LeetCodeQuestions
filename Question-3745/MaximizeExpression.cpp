class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int maxval = INT_MIN,prevmax=INT_MIN,min =INT_MAX;
        int smallest = nums[0];
        int second_largest = nums[n - 2];
        int largest = nums[n - 1];

        return second_largest+largest-smallest;
    }
};