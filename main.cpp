#include <iostream>

#include "library.hpp"

using namespace library;

int main()
{
    std::vector nums = {0,2,0};
    int target = 0;
    std::vector<int> result = twoSum(nums, target);

    for (size_t i = 0; i < result.size(); i++)
        std::cout << result[i] << std::endl;

    return 0;
}
