class Solution {
public:
    string convertToTitle(int columnNumber) 
    {
        string res = "";
        while (columnNumber > 0) 
        {
            columnNumber--; // To adjust for 1-based indexing in Excel columns
            char ch = (columnNumber % 26) + 'A';
            res = ch + res;
            columnNumber /= 26;
        }
        return res;
    }
};
