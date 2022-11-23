int romanToInt(string s) {
    map<char, int> tr;
    tr.insert({ 'I', 1 });
    tr.insert({ 'V', 5 });
    tr.insert({ 'X', 10 });
    tr.insert({ 'L', 50 });
    tr.insert({ 'C', 100 });
    tr.insert({ 'D', 500 });
    tr.insert({ 'M', 1000 });
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (tr[s[i]] < tr[s[i + 1]])
        {
            ans += tr[s[i+1]]- tr[s[i]];
            i++;
            continue;
        }
        ans += tr[s[i]];
    }
    return ans;
    }
