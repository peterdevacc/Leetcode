//
// Created by Peter on 2022/4/16.
//

#include "longest_palindrome.h"

namespace Medium {

    /*
     * Date: 2021/12/27
     * Runtime: 688 ms, faster than 11.19% of C++ online submissions for Longest Palindromic Substring.
     * Memory Usage: 30.1 MB, less than 34.46% of C++ online submissions for Longest Palindromic Substring.
     * */
    string longestPalindrome(string s) {
        if (s.size() == 1) {
            return s;
        }
        if (s.size() == 2) {
            if (s[0] == s[1]) {
                return s;
            } else {
                return string{s[0]};
            }
        }

        long size = s.size();
        long start = 0;
        long length = 1;
        vector<vector<bool>> stateMap(size, vector<bool>(size, true));
        for (long i = size - 1; i >= 0; --i) {
            for (auto dist = 1; dist < size - i; dist++) {
                long j = dist + i;
                stateMap[i][j] = (dist == 1) ? s[i] == s[j] : (s[i] == s[j]) && stateMap[i + 1][j - 1];
                if (stateMap[i][j] && j - i + 1 > length) {
                    length = j - i + 1;
                    start = i;
                }
            }
        }

        string longest = s.substr(start, length);

        return longest;
    }

}
