int lengthOfLongestSubstring(string s) {
        
        unordered_map<char , int>hash;
        int ans = 0;
        int sub = -1;
        
        for(int i = 0; i != s.length() ; i++){
            if(hash.find(s[i]) != hash.end() && hash[s[i]] > sub){
                sub = hash[s[i]];
            }
            hash[s[i]] = i;
            ans = max(ans , i - sub);
        }
        return ans;
    }
