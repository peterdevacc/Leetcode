//
// Created by Peter on 2022/4/15.
//

#include "merge.h"

namespace Easy {

    /*
     * Date: 2021/12/19
     * Runtime: 0 ms, faster than 100.00% of C++ online submissions for Merge Sorted Array.
     * Memory Usage: 9.2 MB, less than 27.60% of C++ online submissions for Merge Sorted Array.
     * */
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        if (m == 0) {
            for (int i = 0; i < n; i++) {
                nums1[i] = nums2[i];
            }
        } else if (n == 0) {

        } else {
            int i = 0;
            int j = 0;
            auto intList = vector<int>{};
            while (i < m) {
                if (j == n) {
                    for (int k = i; k < m; k++) {
                        intList.push_back(nums1[k]);
                    }
                    break;
                }
                if (nums1[i] < nums2[j]) {
                    intList.push_back(nums1[i]);
                    i += 1;
                } else if (nums1[i] == nums2[j]) {
                    intList.push_back(nums1[i]);
                    intList.push_back(nums2[j]);
                    i += 1;
                    j += 1;
                } else {
                    intList.push_back(nums2[j]);
                    j += 1;
                }
            }
            for (int k = j; k < n; k++) {
                intList.push_back(nums2[k]);
            }
            for (int x = 0; x < intList.size(); x++) {
                nums1[x] = intList[x];
            }
        }
    }

}
