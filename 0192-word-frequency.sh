#!/bin/bash
# LeetCode 192 - Word Frequency
# Difficulty: Medium
# Link: https://leetcode.com/problems/word-frequency/
#
# Approach: Unix pipeline.
#   tr -s ' ' '\n'  -> one word per line
#   sort            -> group identical words
#   uniq -c         -> count each word
#   sort -nr        -> order by count, descending
#   awk             -> print "word count"

cat words.txt | tr -s ' ' '\n' | sort | uniq -c | sort -nr | awk '{print $2, $1}'
