/**
 * @param {string[]} words
 * @param {number} k
 * @return {string[]}
 */
var topKFrequent = function(words, k) {
    let map = new Map()
    for(let word of words){
        map.set(word,(map.get(word)||0)+1)
    }
    let freqArr = Array.from(map)
    freqArr.sort((a,b)=>{
        if (b[1] === a[1]) return a[0].localeCompare(b[0]);
        return b[1]-a[1]})
    let ans = (freqArr.slice(0,k)).map((subArr)=>{
        return subArr[0]
    })
    return ans
};