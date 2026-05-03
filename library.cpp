#include "library.hpp"
#include <bits/stdc++.h>

std::vector<int> library::twoSum(std::vector<int>& nums, int target) {
    int x, y;
    // use an 0(n^2) solution
    for (int n : nums) {
        int t = target - n;

        // make sure that the its possible to solve with t == n
        {
            int c = std::count(nums.begin(), nums.end(), n);
            if (n == t && c < 2) continue;
        }

        // find the location of t
        {
        auto it = std::find(nums.begin(), nums.end(), t);
        if (it==nums.end()) continue;

        int d = std::distance(nums.begin(), it);
        x = d;

        // find the location of n
        it = std::find(nums.begin()+(d+1), nums.end(), n);
        if (it==nums.end()) {
            x = 0;
            y = 0;
            continue;
        }
        d = std::distance(nums.begin(), it);
        y = d;
        }
        break;
    }

    return {x, y};
}

// very simple when you learn about string.find()
bool library::rotateString(std::string s, std::string goal) {
    if (s.size() != goal.size()) return false;
    return (s + s).find(goal) != std::string::npos;
}