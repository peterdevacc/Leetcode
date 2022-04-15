//
// Created by Peter on 2022/4/15.
//

#include "longest_common_prefix.h"

namespace Easy {

    /*
     * Date: 2021/12/19
     * Runtime: 12 ms, faster than 9.85% of C++ online submissions for Longest Common Prefix.
     * Memory Usage: 15.5 MB, less than 6.81% of C++ online submissions for Longest Common Prefix.
     * */
    string longestCommonPrefix(vector<string> &strs) {
        if (strs.size() == 1) {
            return strs[0];
        }

        auto sorted = strs;
        std::sort(sorted.begin(), sorted.end());
        auto maxSize = sorted[0].size();
        string commonPrefix;
        for (int i = 0; i < maxSize; ++i) {
            auto temp = sorted[0][i];
            for (auto str: strs) {
                auto prefix = str[i];
                if (prefix != temp) {
                    if (commonPrefix.empty()) {
                        return "";
                    } else {
                        return commonPrefix;
                    }
                }
            }
            commonPrefix += temp;
        }

        return commonPrefix;
    }

}
