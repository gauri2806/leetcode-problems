/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    let s1 = s.trim();
    let strings=s1.trim().split(/\s+/);
    return strings.reverse().join(' ');
};