class Solution {
public:
   string longestDupSubstring(string str) {
    string_view ans;
    unordered_set<string_view> s;
    int l = 0;
    int h = str.size();
    int m;
    while(l<=h)
    {
        bool flag = 0;
        m = l+(h-l)/2;
        auto t = string_view(str);
        for(int i=0;i<str.size()-m+1;++i)
        {
            auto x = t;
            x.remove_prefix(i);
            x.remove_suffix(str.size()-m-i);
            auto y = s.insert(x);
            if(y.second != true)
            {
                flag = 1;
                ans = x;
                break;
            }
        }
        if(flag)
            l = m+1;
        else h = m-1;
    }
    return string(ans);
}
};
