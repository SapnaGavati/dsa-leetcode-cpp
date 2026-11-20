/*
 * LeetCode 190 - Reverse Bits
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/reverse-bits/
 *
 * Approach: Build the answer one bit at a time. For each of the 32
 * positions, shift the result left, copy in the lowest bit of n, then
 * shift n right. uint32_t keeps the shifts well-defined.
 *
 * Time: O(32) = O(1) | Space: O(1)
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        for (int i = 0; i < 32; i++) {
            res = (res << 1) | (n & 1);
            n >>= 1;
        }
        return res;
    }
};
