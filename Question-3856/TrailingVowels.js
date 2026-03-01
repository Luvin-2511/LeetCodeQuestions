/**
 * @param {string} s
 * @return {string}
 */
var trimTrailingVowels = function(s) {
for (let i = s.length - 1; i >= 0; i--) {
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i'){
        continue;
    }else{
        return s.slice(0,i+1)
    }

}
    return ""
};