/*
 * LeetCode 189 - Rotate Array
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/rotate-array/
 *
 * Approach: Triple reverse. Reduce k to k % n, then
 *   1. reverse the whole array
 *   2. reverse the first k elements
 *   3. reverse the remaining n - k elements
 *
 * Time: O(n) | Space: O(1)
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
