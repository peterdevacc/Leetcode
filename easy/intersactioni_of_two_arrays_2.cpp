//
// Created by Peter on 2022/4/15.
//

#include "intersactioni_of_two_arrays_2.h"

namespace Easy {

    /*
     * Date: 2020/9/29
     * Runtime: 12 ms, faster than 64.04% of C++ online submissions for Intersection of Two Arrays II.
     * Memory Usage: 11.4 MB, less than 5.18% of C++ online submissions for Intersection of Two Arrays II.
     * */
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
        vector<int> result{};

        map<int, int> nums1Map{};
        for (int &i: nums1) {
            nums1Map[i] += 1;
        }

        map<int, int> nums2Map{};
        for (int &i: nums2) {
            nums2Map[i] += 1;
        }

        for_each(nums1Map.begin(), nums1Map.end(), [&](const pair<int, int> item) {
            if (nums2Map.find(item.first) != nums2Map.end()) {
                auto times = min(nums2Map[item.first], item.second);
                for (int i = 0; i < times; ++i) {
                    result.push_back(item.first);
                }
            }
        });

        return result;
    }

}
