#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int patches = 0, i = 0, sz = nums.size();
        long count = 1;
        while (count <= n) {
            if (i < sz && nums[i] <= count)
                count += nums[i++];
            else {
                count *= 2;
                patches++;
            }
        }
        return patches;
    }
};

int main() {
    vector<int> nums;
    int n, num;
    string line;

    cout << "Enter the array elements separated by spaces (press Enter after the last element):" << endl;
    getline(cin, line);
    istringstream iss(line);
    while (iss >> num) {
        nums.push_back(num);
    }

    cout << "Enter the value of n: ";
    cin >> n;

    Solution sol;

    int result = sol.minPatches(nums, n);

    cout << "Output: " << result << endl;

    return 0;
}
