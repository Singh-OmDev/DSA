#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> foursum(vector<int>& nums, int target) {
    vector<vector<int>> result;
    int n = nums.size();

    if (n < 4) return result;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 3; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        for (int j = i + 1; j < n - 2; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;

            int p = j + 1;
            int q = n - 1;

            while (p < q) {
                long long sum =
                    (long long)nums[i] + nums[j] + nums[p] + nums[q];

                if (sum < target) {
                    p++;
                }
                else if (sum > target) {
                    q--;
                }
                else {
                    result.push_back({nums[i], nums[j], nums[p], nums[q]});

                    while (p < q && nums[p] == nums[p + 1]) p++;
                    while (p < q && nums[q] == nums[q - 1]) q--;

                    p++;
                    q--;
                }
            }
        }
    }
    return result;
}

int main() {
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;

    vector<vector<int>> result = foursum(nums, target);

    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
