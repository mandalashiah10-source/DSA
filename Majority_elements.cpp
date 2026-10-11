
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        for (int val : nums) {
            int freq = 0;

            for (int x : nums) {
                if (x == val) {
                    freq++;
                }
            }

            if (freq > n / 2) {
                return val;
            }
        }

        return -1;
    }
};

int main() {
    vector<int> nums = {3, 2, 3};

    Solution s;
    cout << s.majorityElement(nums);

    return 0;
}
