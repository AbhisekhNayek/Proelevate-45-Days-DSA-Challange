class Solution {
public:
    string intToRoman(int num) {
        // Define Roman numerals and their values
        vector<pair<int, string>> valueSymbols = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };

        string result = "";
        int i = 0; // Initialize index for the valueSymbols

        // Iterate through the values in a single loop
        while (num > 0) {
            // While the current value can be subtracted from num
            if (num >= valueSymbols[i].first) {
                result += valueSymbols[i].second; // Append the symbol
                num -= valueSymbols[i].first; // Subtract the value
            } else {
                i++; // Move to the next value-symbol pair
            }
        }

        return result;
    }
};
