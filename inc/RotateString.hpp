#ifndef LEETCODE_ROTATESTRING_HPP
#define LEETCODE_ROTATESTRING_HPP
#include <string>

inline bool rotateString(std::string s, std::string goal) {
    if (s.size() != goal.size()) return false;
    return (s + s).find(goal) != std::string::npos;
}
#endif //LEETCODE_ROTATESTRING_HPP
