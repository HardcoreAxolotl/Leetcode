//
// Created by HardcoreAxolotl on 11/09/2026.
//

#ifndef LEETCODE_TWOSUM_HPP
#define LEETCODE_TWOSUM_HPP
#include <algorithm>
#include <vector>

inline std::vector<int> twoSum(std::vector<int>& nums, int target) {
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
#endif //LEETCODE_TWOSUM_HPP
