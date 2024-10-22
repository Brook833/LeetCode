//
// Created by brook on 2024/10/22.
//

#include <vector>
#include <iostream>
int removeDuplicates(std::vector<int>& nums) {
    if (nums.size() < 2) {
        return nums.size();
    } else {
        int slow = 0;
        for (int fast = 2; fast != nums.size(); ++fast) {
            if (nums[slow] != nums[fast]) {
                nums[++slow + 1] = nums[fast];
            }
        }
        return slow + 2;
    }
}

int main() {
    std::vector<int> nums = {1,1,1,2,2,3};
    int ret = removeDuplicates(nums);

    std::cout << ret << std::endl;

    return 0;
}