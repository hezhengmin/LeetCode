/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function (s) {
    if (s.length === 1) return false;
    let stack = [];
    for (let index = 0; index < s.length; index++) {
        const element = s[index];
        if (element === "(" || element === "{" || element === "[") {
            stack.push(element);
        } else {
            const last = stack.pop();
            if (last === undefined) return false;
            if (last === "(" && element != ")") return false;
            if (last === "[" && element != "]") return false;
            if (last === "{" && element != "}") return false;
        }
    }
    return stack.length === 0 ? true : false;
};

const ans = isValid(")(){}");
console.log(ans);
