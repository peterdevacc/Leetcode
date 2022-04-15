//
// Created by Peter on 2022/4/15.
//

#include "my_sqrt.h"

namespace Easy {

    /*
     * Date: 2021/12/19
     * Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sqrt(x).
     * Memory Usage: 6 MB, less than 24.18% of C++ online submissions for Sqrt(x).
     * */
    int mySqrt(int x) {
        if (x == 1) {
            return 1;
        }
        long result = x;
        while (result * result - x >= 1) {
            result = (result + x / result) / 2;
        }
        return (int) result;
    }

}
