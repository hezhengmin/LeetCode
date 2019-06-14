class Solution {
   public:
    string symbol[13] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    map<string, int> symbolToValue;
    void init() {
        symbolToValue.clear();
        symbolToValue["I"] = 1;
        symbolToValue["IV"] = 4;
        symbolToValue["V"] = 5;
        symbolToValue["IX"] = 9;
        symbolToValue["X"] = 10;
        symbolToValue["XL"] = 40;
        symbolToValue["L"] = 50;
        symbolToValue["XC"] = 90;
        symbolToValue["C"] = 100;
        symbolToValue["CD"] = 400;
        symbolToValue["D"] = 500;
        symbolToValue["CM"] = 900;
        symbolToValue["M"] = 1000;
    }
    string intToRoman(int num) {
        init();
        string result = "";
        while (num) {
            for (int i = 12; i >= 0; i--) {
                if (num >= symbolToValue[symbol[i]]) {
                    num -= symbolToValue[symbol[i]];
                    result += symbol[i];
                    break;
                }
            }
        }
        return result;
    }
};