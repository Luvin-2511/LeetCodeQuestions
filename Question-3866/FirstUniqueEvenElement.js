/**
 * @param {number[]} nums
 * @return {number}
 */
var firstUniqueEven = function(nums) {
    const map = new Map()
    for(let num of nums){
    map.set(num,(map.get(num)||0)+1)
}

for(let [key,val] of map){
    if(key%2===0 && val===1){
        return key
    }
}
return -1;
};