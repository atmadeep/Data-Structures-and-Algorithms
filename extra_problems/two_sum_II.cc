#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  vector<int> twoSum(vector<int>& numbers, int target) {
    int left = 0, right = numbers.size() - 1;
    while (left < right) {
      if (numbers[left] + numbers[right] == target)
        return {left + 1, right + 1};
      else if (numbers[left] + numbers[right] < target)
        left++;
      else
        right--;
    }
    return {-1, -1};
  }
};

int main() {
  vector<int> numbers = {2, 7, 11, 15};
  int target = 9;
  Solution sol;
  vector<int> result = sol.twoSum(numbers, target);
  cout << result[0] << " " << result[1] << endl;
  return 0;
}