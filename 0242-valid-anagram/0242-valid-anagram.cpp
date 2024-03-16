class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;

        // Check if the sizes of the strings are equal
        if (s.size() != t.size())
            return false;

        for (char c : s)
            mp[c]++;
        for (char c : t)
            mp[c]--;

        for (const auto &pair : mp) {
            if (pair.second != 0)
                return false;
        }
        return true;
    }
};
