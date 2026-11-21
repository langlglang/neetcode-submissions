class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> seen;
        int l = 0;
        int best = 0;
        for(int r = 0; r < s.length(); r++){
            while(seen.contains(s[r])){
                seen.erase(s[l]);
                l++;
            }
            seen.insert(s[r]);
            best = max(best, r - l + 1);
        }
        return best;

    }
};
