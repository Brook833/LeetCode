//
// Created by brook on 2024/10/22.
//

#include <iostream>
#include <vector>
#include <algorithm>

void rotate(std::vector<int>& nums, int k) {
    int n = nums.size();
    std::vector<int> tmp(n);
    for (int i = 0; i != n; ++i) {
        tmp[(i + k) % n] = nums[i];
    }
    nums = tmp;
}

int main() {
    std::vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;

    rotate(nums, k);

    for (auto &c : nums) {
        std::cout << c << " ";
    }

    return 0;
}