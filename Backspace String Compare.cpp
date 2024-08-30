class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int> s1, s2;
        string str1, str2;

        for(int i=0;i<s.size();i++)
        {
            if(!s1.empty() && s[i] == '#')
            {
                s1.pop();
            }
            else if(s[i] != '#')
            {
                s1.push(s[i]);
            }
        }

        for(int i=0;i<t.size();i++)
        {
            if(!s2.empty() && t[i] == '#')
            {
                s2.pop();
            }
            else if(t[i] != '#')
            {
                s2.push(t[i]);
            }
        }

        while(!s1.empty())
        {
            str1.push_back(s1.top());
            s1.pop();
        }

        while(!s2.empty())
        {
            str2.push_back(s2.top());
            s2.pop();
        }

        return str1 == str2;
    }
};
