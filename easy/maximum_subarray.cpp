//
// Created by Peter on 2022/4/15.
//

#include "maximum_subarray.h"

namespace Easy {

    /*
     * Date: 2020/10/1
     * Runtime: 8 ms, faster than 97.20% of C++ online submissions for Maximum Subarray.
     * Memory Usage: 13.3 MB, less than 43.03% of C++ online submissions for Maximum Subarray.
     * */
    int maxSubArray(vector<int> &nums) {
        auto size = nums.size();
        if (size == 1) {
            return nums[0];
        }

        auto begin = INT32_MIN;
        auto end = 0;
        for (int num: nums) {
            end += num;
            if (end > begin) {
                begin = end;
            }
            if (end < 0) {
                end = 0;
            }
        }

        return begin;
    }

}
