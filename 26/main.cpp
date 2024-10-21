//
// Created by brook on 2024/10/21.
//

#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int>& nums) {
    int slow = 0;
    for (int i = 0; i != nums.size(); ++i) {
        if (nums[slow] != nums[i]) {
            nums[++slow] = nums[i];
        }
    }

    return ++slow;
}

int main() {
    std::vector<int> nums = {1,1,2};
    int ret = removeDuplicates(nums);

    std::cout << ret << std::endl;
    for (auto c : nums) {
        std::cout << c << " ";
    }
    return 0;
}