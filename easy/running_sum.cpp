//
// Created by Peter on 2022/4/16.
//

#include "running_sum.h"

namespace Easy {

    /**
    * Date: 2020/9/25
    * Runtime: 0 ms, faster than 100.00% of C++ online submissions for Running Sum of 1d Array.
    * Memory Usage: 8.7 MB, less than 49.34% of C++ online submissions for Running Sum of 1d Array.
    */
    vector<int> runningSum(vector<int> &nums) {
        auto current = 0;
        vector<int> result{};

        auto size = nums.size();
        for (int i = 0; i < size; i++) {
            current += nums[i];
            result.push_back(current);
        }

        return result;
    }

}
