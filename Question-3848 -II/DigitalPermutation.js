/**
 * @param {number} n
 * @return {boolean}
 */
 function factorial(num){
    let fact = 1;
    for(let i = 1;i<=num;i++){
        fact*=i;
    }
    return fact
 }
var isDigitorialPermutation = function(n) {
    let temp = n;
    let sum = 0
    while(temp!=0){
        let dig = temp%10;
        temp = Math.floor(temp/10);
        sum+= factorial(dig);
    }

    if(String(sum).length != String(n).length) return false
    let s1 = String(sum).split("").sort().join("")
    let s2 = String(n).split("").sort().join("")
    return s1 ===s2
};