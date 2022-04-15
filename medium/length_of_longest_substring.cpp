//
// Created by Peter on 2022/4/16.
//

#include "length_of_longest_substring.h"

namespace Medium {

    /*
     * Date: 2021/12/21
     * Runtime: 16 ms, faster than 63.67% of C++ online submissions for Longest Substring Without Repeating Characters.
     * Memory Usage: 20.6 MB, less than 10.72% of C++ online submissions for Longest Substring Without Repeating
     * */
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0) {
            return 0;
        }
        if (s.size() == 1) {
            return 1;
        }

        auto subStr = string{};
        int max = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (std::find(subStr.begin(), subStr.end(), s[i]) == subStr.end()) {
                subStr.push_back(s[i]);
            } else {
                if (max < subStr.size()) {
                    max = subStr.size();
                }

                auto pos = subStr.find(s[i]);
                auto gap = i - pos;
                subStr = subStr.substr(pos + 1, gap);
                subStr.push_back(s[i]);
            }
        }

        if (max < subStr.size()) {
            max = subStr.size();
        }

        return max;
    }

}
