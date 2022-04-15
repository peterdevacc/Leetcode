//
// Created by Peter on 2022/4/16.
//

#include "reverse_integer.h"

namespace Easy {

    /*
     * Date: 2020/10/4
     * Runtime: 0 ms, faster than 100.00% of C++ online submissions for Reverse Integer.
     * Memory Usage: 6.2 MB, less than 16.34% of C++ online submissions for Reverse Integer.
     * */
    int reverse(int x) {
        auto result = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && pop > 7)) {
                return 0;
            }
            if (result < INT_MIN / 10 || (result == INT_MIN / 10 && pop < -8)) {
                return 0;
            }
            result = result * 10 + pop;
        }
        return result;
    }

}
