//
// Created by Peter on 2022/4/15.
//

#include "majority_element.h"

namespace Easy {

    /*
     * Date: 2020/9/26
     * Runtime: 56 ms, faster than 42.93% of C++ online submissions for Majority Element.
     * Memory Usage: 20 MB, less than 5.40% of C++ online submissions for Majority Element.
     * */
    int majorityElement(vector<int> &nums) {
        auto counter = map<int, int>{};
        for (int num: nums) {
            if (counter.find(num) == counter.end()) {
                counter[num] = 1;
            } else {
                counter[num] += 1;
            }
        }
        auto result = counter.begin()->first;
        auto max = counter.begin()->second;
        for (auto item: counter) {
            if (max < item.second) {
                result = item.first;
                max = item.second;
            }
        }
        return result;
    }

}
