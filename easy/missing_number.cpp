//
// Created by Peter on 2022/4/15.
//

#include "missing_number.h"

namespace Easy {

    /*
     * Date: 2020/9/29
     * Runtime: 32 ms, faster than 98.12% of C++ online submissions for Missing Number.
     * Memory Usage: 18.3 MB, less than 14.64% of C++ online submissions for Missing Number.
     * */
    int missingNumber(vector<int> &nums) {
        float first = 1;
        auto last = static_cast<float>(nums.size());
        double currentRemain = (first + last) * (last / 2);

        for (const float num: nums) {
            currentRemain -= num;
        }

        return static_cast<int>(currentRemain);
    }

}
