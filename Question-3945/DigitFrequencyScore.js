/**
 * @param {number} n
 * @return {number}
 */
var digitFrequencyScore = function (n) {
  let map = new Map();
  let temp = n;
  while (temp != 0) {
    let dig = temp % 10;
    map.set(dig, (map.get(dig) || 0) + 1);
    temp = Math.floor(temp / 10);
  }

  let ans = 0;
  for (let [key, val] of map) {
    ans += key * val;
  }
  return ans;
};
