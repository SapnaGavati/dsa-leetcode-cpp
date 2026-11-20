/*
 * LeetCode 8 - String to Integer (atoi)
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/string-to-integer-atoi/
 *
 * Approach: Walk the string in order: skip spaces, read an optional
 * sign, then accumulate digits. Check for overflow BEFORE multiplying
 * by 10 so an int never actually overflows, and clamp to INT_MAX/INT_MIN.
 *
 * Time: O(n) | Space: O(1)
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();

        while (i < n && s[i] == ' ') i++;

        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') sign = -1;
            i++;
        }

        int res = 0;
        while (i < n && isdigit(s[i])) {
            int d = s[i] - '0';
            if (res > (INT_MAX - d) / 10) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            res = res * 10 + d;
            i++;
        }
        return res * sign;
    }
};
