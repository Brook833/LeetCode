//
// Created by brook on 2024/10/22.
//

#include <vector>
#include <iostream>

int maxProfit(std::vector<int>& prices) {
    int cost = INT32_MAX;
    int profit = 0;
    for (int i = 0; i != prices.size(); ++i) {
        cost = cost < prices[i] ? cost : prices[i];
        profit = ((prices[i] - cost) > profit ) ? (prices[i] - cost) : profit;
    }
    return profit;
}

int main() {
    std::vector<int> prices = {7,1,5,3,6,4};
    int ret = maxProfit(prices);

    std::cout << ret << std::endl;

    return 0;
}