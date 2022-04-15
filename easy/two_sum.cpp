//
// Created by Peter on 2022/4/16.
//

#include "two_sum.h"

namespace Easy {

    /**
    * Date: 2020/9/25
    * Runtime: 16 ms, faster than 79.63% of C++ online submissions for Two Sum.
    * Memory Usage: 10.3 MB, less than 18.60% of C++ online submissions for Two Sum.
    */
    vector<int> twoSum(vector<int> &nums, int target) {
        map<int, int> numMap{};
        vector<int> result{};

        auto size = nums.size();
        for (int i = 0; i < size; i++) {
            auto remain = target - nums[i];
            if (numMap.find(remain) == numMap.end()) {
                numMap[nums[i]] = i;
            } else {
                result.push_back(numMap[remain]);
                result.push_back(i);
                break;
            }
        }

        return result;
    }

}
