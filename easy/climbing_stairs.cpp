//
// Created by Peter on 2022/4/15.
//

#include "climbing_stairs.h"

namespace Easy {

    /*
     * Date: 2020/9/30
     * Runtime: 0 ms, faster than 100.00% of C++ online submissions for Climbing Stairs.
     * Memory Usage: 6.4 MB, less than 5.16% of C++ online submissions for Climbing Stairs.
     * */
    int climbStairs(int n) {
        if (n <= 1) {
            return 1;
        }

        vector<int> ways{};
        ways.reserve(n + 1);

        ways[0] = 1;
        ways[1] = 1;

        for (int i = 2; i <= n; ++i) {
            ways[i] = ways[i - 2] + ways[i - 1];
        }

        return ways[n];
    }

}
