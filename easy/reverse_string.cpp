//
// Created by Peter on 2022/4/16.
//

#include "reverse_string.h"

namespace Easy {

    /**
    * Date: 2020/9/25
    * Runtime: 44 ms, faster than 88.79% of C++ online submissions for Reverse String.
    * Memory Usage: 23.5 MB, less than 16.01% of C++ online submissions for Reverse String.
    */
    void reverseString(vector<char> &s) {
        auto size = s.size();
        auto middle = size / 2;
        for (unsigned long i = 0, j = (size - 1); i < middle; i++, j--) {
            auto tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
        }
    }

}
