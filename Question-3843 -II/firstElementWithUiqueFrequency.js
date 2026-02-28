/**
 * @param {number[]} nums
 * @return {number}
 */
var firstUniqueFreq = function(nums) {
let map = new Map()
for(let num of nums){
    if(map.has(num)){
        map.set(num,map.get(num)+1)
    }else{
        map.set(num,1)
    }
}


let count = new Map()
for(let [key,val] of map){
    if(count.has(val)){
        count.set(val,count.get(val)+1)
    }else{
        count.set(val,1)
    }
}

for(let num of nums){
    let freq = map.get(num)
    if(count.get(freq) ==1){
        return num
        break
    }
}
// console.log(1)

return -1
};