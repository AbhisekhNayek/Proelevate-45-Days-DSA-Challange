class Solution {
public:

    bool isPalindrome(string s)
    {
        int i=0, j=s.size()-1;

        while(i<=j)
        {
            if(s[i] != s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    bool validPalindrome(string s) 
    {
        int i=0, j=s.size()-1;

        if(isPalindrome(s))
        {
            return true;
        }

        while(i<=j)
        {
            if(s[i] == s[j])
            {
                i++;
                j--;
            }
            else
            {
                return isPalindrome(s.substr(i, j-i)) || isPalindrome(s.substr(i+1, j-i));
            }
        }
        return false;
    }
};
