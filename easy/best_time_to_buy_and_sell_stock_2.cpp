//
// Created by Peter on 2022/4/15.
//

#include "best_time_to_buy_and_sell_stock_2.h"

namespace Easy {

    /*
     * Date: 2020/9/28
     * Runtime: 12 ms, faster than 71.82% of C++ online submissions for Best Time to Buy and Sell Stock II.
     * Memory Usage: 13.3 MB, less than 19.62% of C++ online submissions for Best Time to Buy and Sell Stock II.
     * */
    int maxProfit2(vector<int> &prices) {
        auto profit = 0;
        if (prices.size() == 1) {
            return profit;
        }

        for (auto i = 1; i < prices.size(); ++i) {
            if (prices[i] > prices[i - 1]) {
                profit += prices[i] - prices[i - 1];
            }
        }

        return profit;
    }

}
