#!/bin/bash
# LeetCode 193 - Valid Phone Numbers
# Difficulty: Easy
# Link: https://leetcode.com/problems/valid-phone-numbers/
#
# Approach: grep -E with an anchored pattern matching either
# xxx-xxx-xxxx or (xxx) xxx-xxxx.

grep -E '^([0-9]{3}-|\([0-9]{3}\) )[0-9]{3}-[0-9]{4}$' file.txt
