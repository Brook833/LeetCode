//
// Created by brook on 2024/10/21.
//

#include <iostream>
#include <vector>

int removeElement(std::vector<int>& nums, int val) {
    std::vector<int> temp;
    for (int num : nums) {
        if (num != val) {
            temp.push_back(num);
        }
    }

    nums = temp;
    return nums.size();
}

int main() {
    std::vector<int> nums = {3,2,2,3};
    int val = 3;

    int ret = removeElement(nums, val);

    std::cout << ret << std::endl;
    for (auto c : nums) {
        std::cout << c << " ";
    }
    return 0;
}
