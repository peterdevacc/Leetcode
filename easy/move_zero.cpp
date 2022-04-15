//
// Created by Peter on 2022/4/15.
//

#include "move_zero.h"

namespace Easy {

    /*
     * Date: 2020/9/28
     * Runtime: 8 ms, faster than 92.13% of C++ online submissions for Move Zeroes.
     * Memory Usage: 9.4 MB, less than 5.26% of C++ online submissions for Move Zeroes.
     * */
    void moveZeroes(vector<int> &nums) {
        auto j = 0;
        for (auto i = 0; i < nums.size(); ++i) {
            if (nums[i] != 0) {
                nums[j++] = nums[i];
            }
        }
        for (auto i = j; i < nums.size(); ++i) {
            nums[i] = 0;
        }
    }

}
