/*
 * LeetCode 5 - Longest Palindromic Substring
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/longest-palindromic-substring/
 *
 * Approach: Expand around center. Try all 2n-1 centers (single
 * character for odd length, gap between two characters for even length)
 * and expand outward while characters match.
 *
 * Time: O(n^2) | Space: O(1)
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0, maxLen = 1;

        auto expand = [&](int l, int r) {
            while (l >= 0 && r < n && s[l] == s[r]) {
                l--;
                r++;
            }
            int len = r - l - 1;
            if (len > maxLen) {
                maxLen = len;
                start = l + 1;
            }
        };

        for (int i = 0; i < n; i++) {
            expand(i, i);       // odd length
            expand(i, i + 1);   // even length
        }
        return s.substr(start, maxLen);
    }
};
