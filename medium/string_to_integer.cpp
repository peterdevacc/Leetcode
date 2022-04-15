//
// Created by Peter on 2022/4/16.
//

#include "string_to_integer.h"

namespace Medium {

    /*
     * Date: 2022/04/10
     * Runtime: 3 ms, faster than 76.98% of C++ online submissions for String to Integer (atoi).
     * Memory Usage: 7.2 MB, less than 7.68% of C++ online submissions for String to Integer (atoi).
     * */
    int myAtoi(string s) {
        vector<int> resultList{};
        int result = 0;
        bool isNegative = false;
        size_t notBlankIndex = 0;

        for (char c: s) {
            if (c == ' ') {
                notBlankIndex += 1;
            } else {
                break;
            }
        }

        if (std::isalpha(s[notBlankIndex]) || s[notBlankIndex] == '.') {
            return result;
        } else {
            if (s[notBlankIndex] == '-') {
                isNegative = true;
                notBlankIndex += 1;
            } else if (s[notBlankIndex] == '+') {
                notBlankIndex += 1;
            }

            auto notZeroIndex = notBlankIndex;
            for (size_t i = notZeroIndex; i < s.size(); ++i) {
                if (std::isdigit(s[i]) && s[i] == '0') {
                    notZeroIndex += 1;
                } else {
                    break;
                }
            }

            for (size_t i = notZeroIndex; i < s.size(); ++i) {
                if (std::isdigit(s[i])) {
                    resultList.push_back(s[i] - '0');
                } else {
                    break;
                }
            }
        }

        if (resultList.size() > 10) {
            if (isNegative) {
                return INT32_MIN;
            } else {
                return INT32_MAX;
            }
        }

        size_t numOfDigit = resultList.size() - 1;
        int64_t tempResult = 0;
        for (int64_t num: resultList) {
            for (int j = 0; j < numOfDigit; ++j) {
                num *= 10;
            }
            numOfDigit -= 1;
            tempResult += num;
        }

        if (isNegative) {
            tempResult *= -1;
            if (tempResult < INT32_MIN) {
                result = INT32_MIN;
            } else {
                result = tempResult;
            }
        } else {
            if (tempResult > INT32_MAX) {
                result = INT32_MAX;
            } else {
                result = tempResult;
            }
        }

        return result;
    }

}
