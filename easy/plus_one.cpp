//
// Created by Peter on 2022/4/15.
//

#include "plus_one.h"

namespace Easy {

    /*
     * Date: 2020/10/2
     * Runtime: 0 ms, faster than 100.00% of C++ online submissions for Plus One.
     * Memory Usage: 9 MB, less than 8.79% of C++ online submissions for Plus One.
     * */
    vector<int> plusOne(vector<int> &digits) {
        auto size = static_cast<long>(digits.size()) - 1;
        if (digits[size] != 9) {
            digits[size] = digits[size] + 1;
            return digits;
        }

        digits[size] = 1;
        digits.push_back(0);

        if (size > 0) {
            bool eraseFront = true;
            for (auto i = size; i >= 1; --i) {
                auto num = digits[i] + digits[i - 1];
                if (num == 10) {
                    digits[i] = 0;
                    digits[i - 1] = 1;
                    if (i - 1 == 0) {
                        eraseFront = false;
                    }
                } else {
                    digits[i] = num;
                    digits[i - 1] = 0;
                }
            }
            if (eraseFront) {
                digits.erase(digits.begin());
            }
        }

        return digits;
    }

}
