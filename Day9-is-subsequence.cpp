class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        if (s.size()>t.size())
            return false;
        int k=0;
        int size=s.size();
        for (auto c:t)
        {
            if (c==s[k])
            {
                k++;
            }
        }
        if (k==size)
            return true;
        return false;
    }
};
