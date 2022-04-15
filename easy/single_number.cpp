//
// Created by Peter on 2022/4/16.
//

#include "single_number.h"

namespace Easy {

    /*
     * Date: 2020/9/25
     * Runtime: 20 ms, faster than 92.82% of C++ online submissions for Single Number.
     * Memory Usage: 12.2 MB, less than 29.28% of C++ online submissions for Single Number.
     * */
    unsigned int singleNumber(vector<unsigned int> &nums) {
        auto size = nums.size();

        unsigned int unique = 0;
        for (auto i = 0; i < size; i++) {
            unique = unique ^ nums[i];
        }

        return unique;
    }

}
