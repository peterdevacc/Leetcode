//
// Created by Peter on 2022/4/15.
//

#include "remove_duplicates_from_sorted_array.h"

namespace Easy {

    /*
     * Date: 2020/10/1
     * Runtime: 20 ms, faster than 69.49% of C++ online submissions for Remove Duplicates from Sorted Array.
     * Memory Usage: 14 MB, less than 13.25% of C++ online submissions for Remove Duplicates from Sorted Array.
     * */
    int removeDuplicates(vector<int> &nums) {
        auto size = nums.size();
        if (size == 0) {
            return 0;
        }

        auto length = 1;
        auto begin = 1;

        for (auto i = 1; i < size; ++i) {
            if (nums[i - 1] != nums[i]) {
                nums[begin] = nums[i];
                begin += 1;
                length += 1;
            }
        }

        return length;
    }

}
