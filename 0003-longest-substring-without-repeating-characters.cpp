/*
 * LeetCode 3 - Longest Substring Without Repeating Characters
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 *
 * Approach: Sliding window with last-seen index per character.
 * If the current character was seen inside the window, move `left`
 * just past its previous occurrence.
 *
 * Time: O(n) | Space: O(1) (fixed 256-size array)
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(256, -1);
        int best = 0, left = 0;
        for (int right = 0; right < (int)s.size(); right++) {
            unsigned char c = s[right];
            if (last[c] >= left) {
                left = last[c] + 1;
            }
            last[c] = right;
            best = max(best, right - left + 1);
        }
        return best;
    }
};
