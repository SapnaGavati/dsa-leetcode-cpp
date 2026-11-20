/*
 * LeetCode 6 - Zigzag Conversion
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/zigzag-conversion/
 *
 * Approach: Simulate the walk. Keep one string per row and bounce a
 * row pointer down to the last row and back up to the first,
 * appending each character to its row. Join the rows at the end.
 *
 * Time: O(n) | Space: O(n)
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= (int)s.size()) return s;

        vector<string> rows(numRows);
        int row = 0, dir = 1;

        for (char c : s) {
            rows[row] += c;
            if (row == 0) dir = 1;
            else if (row == numRows - 1) dir = -1;
            row += dir;
        }

        string res;
        for (auto& r : rows) res += r;
        return res;
    }
};
