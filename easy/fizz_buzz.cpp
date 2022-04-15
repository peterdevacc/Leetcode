//
// Created by Peter on 2022/4/15.
//

#include "fizz_buzz.h"

namespace Easy {

    /*
     * Date: 2020/9/25
     * Runtime: 4 ms, faster than 98.15% of C++ online submissions for Fizz Buzz.
     * Memory Usage: 7.9 MB, less than 54.37% of C++ online submissions for Fizz Buzz.
     * */
    vector<string> fizzBuzz(int n) {
        auto result = vector<string>{};
        for (int i = 1; i <= n; ++i) {
            auto three = i % 3;
            auto five = i % 5;
            if (three == 0 && five == 0) {
                result.emplace_back("FizzBuzz");
            } else if (three == 0) {
                result.emplace_back("Fizz");
            } else if (five == 0) {
                result.emplace_back("Buzz");
            } else {
                result.emplace_back(to_string(i));
            }
        }
        return result;
    }

}
