//
// Created by Peter on 2022/4/16.
//

#include "str_str.h"

namespace Easy {

    /*
     * Date: 2021/12/19
     * Runtime: 60 ms, faster than 55.09% of C++ online submissions for Implement strStr().
     * Memory Usage: 368.7 MB, less than 8.99% of C++ online submissions for Implement strStr().
     * */
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }
        if (needle.length() > haystack.length() || haystack.empty()) {
            return -1;
        }

        for (int i = 0; i < haystack.length(); i++) {
            if (haystack[i] == needle[0]) {
                if (haystack.length() < i + needle.length()) {
                    return -1;
                }
                if (haystack.substr(i, needle.length()) == needle) {
                    return i;
                }
            }
        }

        return -1;
    }

}
