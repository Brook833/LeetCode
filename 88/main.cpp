//
// Created by brook on 2024/10/21.
//

#include <iostream>
#include <vector>

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    while (m > 0 && n > 0) {
        if (nums1[m - 1] > nums2[n - 1]) {
            nums1[m + n - 1] = nums1[m - 1];
            m--;
        } else {
            nums1[m + n - 1] = nums2[n - 1];
            n--;
        }
    }

    if (m == 0 && n > 0) {
        for (int i = 0; i != n; i++) {
            nums1[i] = nums2[i];
        }
    }
}

int main() {
    std::vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    std::vector<int> nums2 = {2,5,6};
    int n = 3;

    merge(nums1, m, nums2, n);
    for (auto c : nums1) {
        std::cout << c << " ";
    }

    return 0;
}