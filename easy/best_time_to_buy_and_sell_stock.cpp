//
// Created by Peter on 2022/4/15.
//

#include "best_time_to_buy_and_sell_stock.h"

namespace Easy {

    /*
     * Date: 2020/9/30
     * Runtime: 8 ms, faster than 96.35% of C++ online submissions for Best Time to Buy and Sell Stock.
     * Memory Usage: 13.2 MB, less than 41.54% of C++ online submissions for Best Time to Buy and Sell Stock.
     * */
    int maxProfit(vector<int> &prices) {
        int profit = 0;

        auto min = INT32_MAX;
        for (int price: prices) {
            if (price < min) {
                min = price;
            } else if (price - min > profit) {
                profit = price - min;
            }
        }

        return profit;
    }

}
