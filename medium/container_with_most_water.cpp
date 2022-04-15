//
// Created by Peter on 2022/4/16.
//

#include "container_with_most_water.h"

namespace Medium {

    /*
     * Date: 2022/04/12
     * Runtime: 152 ms, faster than 23.90% of C++ online submissions for Container With Most Water.
     * Memory Usage: 59 MB, less than 81.71% of C++ online submissions for Container With Most Water.
     * */
    int maxArea(vector<int> &height) {
        int begin = 0;
        int end = height.size() - 1;
        if (height.size() == 2) {
            return std::min(height[begin], height[end]);
        }

        int max = 0;
        while (begin < end) {
            int tempMax = (end - begin) * std::min(height[begin], height[end]);
            if (tempMax > max) {
                max = tempMax;
            }
            if (height[begin] < height[end]) {
                begin += 1;
            } else {
                end -= 1;
            }
        }

        return max;
    }

}
