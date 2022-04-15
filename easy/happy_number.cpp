//
// Created by Peter on 2022/4/15.
//

#include "happy_number.h"

namespace Easy {

    /*
     * Date: 2020/9/30
     * Runtime: 0 ms, faster than 100.00% of C++ online submissions for Happy Number.
     * Memory Usage: 6.1 MB, less than 73.78% of C++ online submissions for Happy Number.
     * */
    bool isHappy(int n) {
        if (n == 1 || n == 7) {
            return true;
        }

        int sum = n;
        int tmp = n;
        while (sum > 9) {
            sum = 0;
            while (tmp > 0) {
                auto digit = tmp % 10;
                sum += digit * digit;
                tmp /= 10;
            }
            if (sum == 1) {
                return true;
            }
            tmp = sum;
        }

        if (sum == 7) {
            return true;
        }

        return false;
    }

}
