//
// Created by brook on 2024/10/22.
//
#include <iostream>
#include <vector>
#include <algorithm>

int majorityElement(std::vector<int>& nums) {
    sort(nums.begin(), nums.end());
    if (nums.size() % 2) {
        return nums[(nums.size() - 1) / 2];
    } else {
        return nums[nums.size() / 2];
    }
}

int main() {
    std::vector<int> nums = {5};
    int ret = majorityElement(nums);

    std::cout << ret << std::endl;
    return 0;
}