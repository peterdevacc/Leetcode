//
// Created by Peter on 2022/4/16.
//

#include "valid_parentheses.h"

namespace Easy {

    /*
     * Date: 2021/10/06
     * Runtime: 0 ms, faster than 100.00% of C++ online submissions for Valid Parentheses.
     * Memory Usage: 6.3 MB, less than 80.04% of C++ online submissions for Valid Parentheses.
     * */
    bool isValid(string s) {
        size_t size = s.size();
        if (size % 2 != 0) {
            return false;
        }

        char leftA = '(';
        char rightA = ')';
        char leftB = '[';
        char rightB = ']';
        char leftC = '{';
        char rightC = '}';

        vector<char> vc{};
        size_t leftSideNum = 0;
        bool hasRightSide = false;

        for (size_t i = 0; i < size; i++) {
            if (s[i] == leftA || s[i] == leftB || s[i] == leftC) {
                vc.push_back(s[i]);
                leftSideNum += 1;
            } else if (s[i] == rightA) {
                hasRightSide = true;
                if (vc.empty() || vc.back() != leftA) {
                    return false;
                } else {
                    vc.pop_back();
                    leftSideNum -= 1;
                }
            } else if (s[i] == rightB) {
                hasRightSide = true;
                if (vc.empty() || vc.back() != leftB) {
                    return false;
                } else {
                    vc.pop_back();
                    leftSideNum -= 1;
                }
            } else if (s[i] == rightC) {
                hasRightSide = true;
                if (vc.empty() || vc.back() != leftC) {
                    return false;
                } else {
                    vc.pop_back();
                    leftSideNum -= 1;
                }
            }
        }

        if (!hasRightSide || leftSideNum > 0) {
            return false;
        }

        return true;
    }

}
