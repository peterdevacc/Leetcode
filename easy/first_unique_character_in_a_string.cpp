//
// Created by Peter on 2022/4/15.
//

#include "first_unique_character_in_a_string.h"

namespace Easy {

    /*
     * Date: 2020/9/29
     * Runtime: 208 ms, faster than 13.95% of C++ online submissions for First Unique Character in a String.
     * Memory Usage: 11.2 MB, less than 5.04% of C++ online submissions for First Unique Character in a String.
     * */
    int firstUniqChar(string s) {
        auto charMap = map<char, int>{};
        for (char &i: s) {
            if (charMap.find(i) == charMap.end()) {
                charMap[i] = 0;
            } else {
                charMap[i] = 1;
            }
        }

        auto result = vector<int>{};
        for_each(charMap.begin(), charMap.end(), [&](const pair<char, int> &item) {
            if (item.second == 0) {
                result.push_back(s.find(item.first));
            }
        });

        if (!result.empty()) {
            auto min = result.front();
            for (const int i: result) {
                if (i < min) {
                    min = i;
                }
            }
            return min;
        }

        return -1;
    }

}
