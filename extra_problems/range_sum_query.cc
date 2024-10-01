#include <bits/stdc++.h>
using namespace std;

class NumArray {
 public:
  vector<int> prefix_sum;
  vector<int> nums;
  NumArray(vector<int>& nums) {
    this->nums = nums;
    prefix_sum.resize(nums.size() + 1, 0);
    prefix_sum[1] = nums[0];
    for (int i = 1; i < nums.size(); i++) {
      prefix_sum[i + 1] = prefix_sum[i] + nums[i];
    }
    for (int a : prefix_sum) {
      cout << a << " ";
    }
    cout << endl;
  }
  int sumRange(int left, int right) {
    return prefix_sum[right + 1] - prefix_sum[left];
  }
};

int main() {
  vector<int> nums = {-2, 0, 3, -5, 2, -1};
  NumArray* obj = new NumArray(nums);
  cout << obj->sumRange(0, 2) << endl;
  cout << obj->sumRange(2, 5) << endl;
  cout << obj->sumRange(0, 5) << endl;
  return 0;
}
