#ifndef LEETCODE_ISVALID_HPP
#define LEETCODE_ISVALID_HPP
#include <string>
#include <vector>
#include <map>
#include <stack>
inline bool isValid(std::string s) {
    if (s.empty()) return true;
    const std::map<char, char> idk = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };
    const std::string end = ")]}";
    std::stack<char> st;

    for (auto c : s) {
        if (end.contains(c)) {
            if (!st.empty()) {
                if (idk.at(c) == st.top()) st.pop();
                else return false;
            }
            else {
                return false;
            }
        }
        else {
            st.push(c);
        }
    }

    if (st.empty()) return true;
    return false;
}
#endif //LEETCODE_ISVALID_HPP
