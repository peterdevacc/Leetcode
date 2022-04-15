//
// Created by Peter on 2022/4/15.
//

#include "power_of_three.h"

namespace Easy {

    /*
     * Date: 2020/10/4
     * Runtime: 4 ms, faster than 99.57% of C++ online submissions for Power of Three.
     * Memory Usage: 6.2 MB, less than 18.16% of C++ online submissions for Power of Three.
     * */
    bool isPowerOfThree(int n) {
        return n > 0 && 1162261467 % n == 0;
    }

}
