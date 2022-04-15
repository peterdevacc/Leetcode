//
// Created by Peter on 2022/4/15.
//

#include "contains_duplicate.h"

namespace Easy {

    /*
     * Date: 2020/9/28
     * Runtime: 108 ms, faster than 26.47% of C++ online submissions for Contains Duplicate.
     * Memory Usage: 21.1 MB, less than 19.77% of C++ online submissions for Contains Duplicate.
     * */
    bool containsDuplicate(vector<int> &nums) {
        auto numSet = set<int>{};

        for (int num: nums) {
            auto isExist = numSet.find(num);
            if (isExist == numSet.end()) {
                numSet.insert(num);
            } else {
                return true;
            }
        }

        return false;
    }

}
