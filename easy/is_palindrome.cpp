//
// Created by Peter on 2022/4/15.
//

#include "is_palindrome.h"

namespace Easy {

    /*
     * Date: 2021/12/19
     * Runtime: 8 ms, faster than 52.06% of C++ online submissions for Valid Palindrome.
     * Memory Usage: 8 MB, less than 6.59% of C++ online submissions for Valid Palindrome.
     * */
    bool isPalindrome(string s) {
        auto str = vector<char>{};
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (c != ' ') {
                if (isalpha(c)) {
                    str.push_back(tolower(c));
                } else if (isdigit(c)) {
                    str.push_back(c);
                }
            }
        }
        if (str.size() <= 1) {
            return true;
        }
        int i = 0;
        int j = str.size() - 1;
        while (i < str.size()) {
            if (str[i] != str[j]) {
                return false;
            }
            i += 1;
            j -= 1;
        }
        return true;
    }

}
