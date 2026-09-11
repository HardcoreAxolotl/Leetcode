//
// Created by HardcoreAxolotl on 11/09/2026.
//

#ifndef LEETCODE_ISPALINDROME_HPP
#define LEETCODE_ISPALINDROME_HPP
#include <string>

inline bool isPalindrome(int x) {
    if (x<0) return false;
    std::string s = std::to_string(x);
    for (int i = (s.length() - 1)/2; i >= 0; i--)
    {
        if (s[i] != s[s.length() - 1 - i])
        {
            return false;
        }
    }
    return true;
}
#endif //LEETCODE_ISPALINDROME_HPP
