/*
Longest Common Prefix

Problem Statement: Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string "".
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";

        sort(strs.begin(), strs.end());

        string a = strs[0];
        string b = strs[strs.size() - 1];
        string ans = "";

        int n = min(a.size(), b.size());

        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) {
                ans += a[i];
            } else {
                break;
            }
        }

        return ans;
    }
};
