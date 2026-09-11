#include <iostream>
#include "IsValid.hpp"


// ANSI escape codes for terminal color output
#define COLOR_GREEN "\033[32m"
#define COLOR_RED   "\033[31m"
#define COLOR_RESET "\033[0m"


struct TestCase {
    std::string input;
    bool expected;
};

int main() {
    std::vector<TestCase> testCases = {
        {"()", true},
        {"()[]{}", true},
        {"({[]})", true},
        {"(]", false},
        {"(])", false},
        {"([)]", false},
        {"(", false},
        {"]", false},
        {")(", false},
        {"((()", false},
        {"{[()]}}", false}
    };

    int passedCount = 0;

    for (const auto& test : testCases) {
        bool actual = isValid(test.input);
        bool passed = (actual == test.expected);

        if (passed) {
            passedCount++;
        }

        // Apply Green for PASS, Red for FAIL
        const char* status = passed
            ? COLOR_GREEN "PASS" COLOR_RESET
            : COLOR_RED   "FAIL" COLOR_RESET;

        printf("[%s] Input: %-10s | Expected: %-5s | Got: %-5s\n",
               status,
               test.input.c_str(),
               test.expected ? "true" : "false",
               actual ? "true" : "false");
    }

    printf("\nResults: %d / %zu tests passed.\n", passedCount, testCases.size());
    return 0;
}