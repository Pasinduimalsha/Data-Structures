#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    vector<int> result; // Create an empty vector
                    result.push_back(i);
                    result.push_back(j);
                    return result; // Return the vector
                }
            }
        }
        return vector<int>(); // Return an empty vector if no solution is found
    }
};

int main() {
    Solution solution;
    int n, target;

    // Input size of array
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Input target value
    cout << "Enter the target sum: ";
    cin >> target;

    // Get the indices
    vector<int> result = solution.twoSum(nums, target);

    // Print result
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
