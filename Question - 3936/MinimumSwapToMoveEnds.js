/**
 * @param {number[]} nums
 * @return {number}
 */

var minimumSwaps = function(nums) {
    let start = 0 
    let end = nums.length - 1
    let count = 0
    while(start<=end) {
        if(nums[start]==0 && nums[end]!==0) {
            start++
            end--
            count++
        }else if(nums[end]==0){
            end--
        }else{
            start++
        }
    }
    return count
}