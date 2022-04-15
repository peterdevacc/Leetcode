//
// Created by Peter on 2022/4/15.
//

#include "pascals_triangle.h"

namespace Easy {

    /*
     * Date: 2020/9/29
     * Runtime: 0 ms, faster than 100.00% of C++ online submissions for Pascal's Triangle.
     * Memory Usage: 6.9 MB, less than 5.05% of C++ online submissions for Pascal's Triangle.
     * */
    vector<vector<int>> generate(int numRows) {
        auto result = vector<vector<int>>{};

        auto begin = 1;
        vector<int> previous;
        while (begin <= numRows) {
            auto row = vector<int>{};
            row.reserve(begin);

            auto count = begin;
            for (int i = 0; i < count; ++i) {
                if (i == 0 || i == count - 1) {
                    row.push_back(1);
                } else {
                    row.push_back(0);
                }
            }

            if (begin > 2) {
                for (int i = 1; i < row.size() - 1; ++i) {
                    row[i] = previous[i - 1] + previous[i];
                }
            }

            result.push_back(row);
            previous = row;
            ++begin;
        }

        return result;
    }

}
