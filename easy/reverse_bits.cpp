//
// Created by Peter on 2022/4/16.
//

#include "reverse_bits.h"

namespace Easy {

    /*
     * Date: 2020/10/4
     * Runtime: 4 ms, faster than 60.31% of C++ online submissions for Reverse Bits.
     * Memory Usage: 6.2 MB, less than 18.93% of C++ online submissions for Reverse Bits.
     * */
    uint32_t reverseBits(uint32_t n) {
        uint32_t ret = 0, power = 31;
        while (n != 0) {
            ret += (n & 1) << power;
            n = n >> 1;
            power -= 1;
        }
        return ret;
    }

}
