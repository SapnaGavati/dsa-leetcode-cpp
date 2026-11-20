/*
 * LeetCode 191 - Number of 1 Bits
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/number-of-1-bits/
 *
 * Approach: Brian Kernighan's trick. n & (n - 1) clears the lowest
 * set bit, so the loop runs once per set bit.
 *
 * Time: O(k), k = number of set bits | Space: O(1)
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n) {
            n &= (n - 1);
            count++;
        }
        return count;
    }
};
