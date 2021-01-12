/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function (strs) {
    const map = {};
    for (const str of strs) {
        const sorted = str.split("").sort().join("");

        if (map[sorted] === undefined) {
            map[sorted] = [str];
        } else {
            map[sorted].push(str);
        }
    }

    const result = [];
    for (const m in map) {
        result.push(map[m]);
    }

    return result; //物件轉陣列 Object.values(map);
};

console.log(groupAnagrams(["eat", "tea", "tan", "ate", "nat", "bat"]));
