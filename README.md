# LeetCode Solutions

My solutions to LeetCode problems, mostly in C++ (with a few Bash problems). Each file starts with a header comment covering the problem, approach, and time/space complexity.

## Solved Problems

| # | Title | Difficulty | Approach | Time | Space | Solution |
|---|-------|------------|----------|------|-------|----------|
| 3 | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | Medium | Sliding window + last-seen index | O(n) | O(1) | [C++](0003-longest-substring-without-repeating-characters.cpp) |
| 5 | [Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/) | Medium | Expand around center | O(n²) | O(1) | [C++](0005-longest-palindromic-substring.cpp) |
| 6 | [Zigzag Conversion](https://leetcode.com/problems/zigzag-conversion/) | Medium | Row simulation | O(n) | O(n) | [C++](0006-zigzag-conversion.cpp) |
| 8 | [String to Integer (atoi)](https://leetcode.com/problems/string-to-integer-atoi/) | Medium | Linear scan with overflow check | O(n) | O(1) | [C++](0008-string-to-integer-atoi.cpp) |
| 189 | [Rotate Array](https://leetcode.com/problems/rotate-array/) | Medium | Triple reverse | O(n) | O(1) | [C++](0189-rotate-array.cpp) |
| 190 | [Reverse Bits](https://leetcode.com/problems/reverse-bits/) | Easy | Bit-by-bit build | O(1) | O(1) | [C++](0190-reverse-bits.cpp) |
| 191 | [Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/) | Easy | Brian Kernighan's trick | O(k) | O(1) | [C++](0191-number-of-1-bits.cpp) |
| 192 | [Word Frequency](https://leetcode.com/problems/word-frequency/) | Medium | Unix pipeline | O(n log n) | O(n) | [Bash](0192-word-frequency.sh) |
| 193 | [Valid Phone Numbers](https://leetcode.com/problems/valid-phone-numbers/) | Easy | grep -E with anchored regex | O(n) | O(1) | [Bash](0193-valid-phone-numbers.sh) |

## Notes

- Files are named `<problem number>-<title>.<ext>`.
- Add new problems as you solve them and update the table above.
