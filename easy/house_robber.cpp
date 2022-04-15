//
// Created by Peter on 2022/4/15.
//

#include "house_robber.h"

namespace Easy {

    /*
     * Date: 2020/10/4
     * Runtime: 4 ms, faster than 52.75% of C++ online submissions for House Robber.
     * Memory Usage: 7.9 MB, less than 48.28% of C++ online submissions for House Robber.
     * */
    int rob(vector<int> &nums) {
        if (nums.empty()) {
            return 0;
        }

        auto size = nums.size();

        auto value1 = nums[0];
        if (size == 1) {
            return value1;
        }

        auto value2 = max(value1, nums[1]);
        if (size == 2) {
            return value2;
        }

        auto result = 0;
        for (int i = 2; i < size; ++i) {
            result = max(nums[i] + value1, value2);
            value1 = value2;
            value2 = result;
        }

        return result;
    }

}
