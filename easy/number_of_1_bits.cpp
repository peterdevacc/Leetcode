//
// Created by Peter on 2022/4/15.
//

#include "number_of_1_bits.h"

namespace Easy {

    /*
     * Date: 2020/9/30
     * Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of 1 Bits.
     * Memory Usage: 6.1 MB, less than 45.51% of C++ online submissions for Number of 1 Bits.
     * */
    int hammingWeight(uint32_t n) {
        auto result = 0;
        while (n != 0) {
            if (n % 2 == 1) {
                result += 1;
            }
            n /= 2;
        }
        return result;
    }

}
