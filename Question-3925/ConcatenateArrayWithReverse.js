/**
 * @param {number[]} nums
 * @return {number[]}
 */
var concatWithReverse = function (nums) {
  let ans = new Array(nums.length * 2);

  for (let i = 0; i < nums.length; i++) {
    ans[i] = nums[i];
  }

  nums.reverse((a, b) => a - b);
  for (let i = nums.length; i < ans.length; i++) {
    ans[i] = nums[i % nums.length];
  }
  return ans;
};
