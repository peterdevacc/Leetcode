//
// Created by Peter on 2022/4/16.
//

#include "roman_to_integer.h"

namespace Easy {

    /*
     * Date: 2020/9/29
     * Runtime: 24 ms, faster than 48.13% of C++ online submissions for Roman to Integer.
     * Memory Usage: 8.5 MB, less than 19.90% of C++ online submissions for Roman to Integer.
     * */
    int romanToInt(string s) {
        auto result = 0;
        auto size = s.size();

        if (size <= 0) {
            return result;
        }

        auto symbolMap = map<char, int>{
                {'I', 1},
                {'V', 5},
                {'X', 10},
                {'L', 50},
                {'C', 100},
                {'D', 500},
                {'M', 1000},
        };

        if (size == 1) {
            return symbolMap[s[0]];
        }

        auto i = 1;
        while (i < size) {
            auto first = symbolMap[s[i - 1]];
            auto second = symbolMap[s[i]];
            if (second > first) {
                result += second - first;
                if (i == size - 2) {
                    result += symbolMap[s[i + 1]];
                }
                i += 2;
            } else {
                if (i == size - 1) {
                    result += first + second;
                } else {
                    result += first;
                }
                i += 1;
            }
        }

        return result;
    }

}
