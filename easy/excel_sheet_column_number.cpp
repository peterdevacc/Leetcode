//
// Created by Peter on 2022/4/15.
//

#include "excel_sheet_column_number.h"

namespace Easy {

    /*
     * Date: 2020/9/28
     * Runtime: 4 ms, faster than 52.80% of C++ online submissions for Excel Sheet Column Number.
     * Memory Usage: 6.5 MB, less than 5.07% of C++ online submissions for Excel Sheet Column Number.
     * */
    int titleToNumber(string s) {
        int result = 0;
        auto size = static_cast<long>(s.size());

        if (size == 1) {
            return static_cast<int>(s[0]) - 64;
        }

        auto counter = size - 1;
        for (auto i = 0; i < size; ++i) {
            int num;
            if (counter > 0) {
                num = (static_cast<int>(s[i]) - 64) * static_cast<int>(pow(26, counter));
            } else {
                num = static_cast<int>(s[i]) - 64;
            }
            result += num;
            counter--;
        }

        return result;
    }

}
