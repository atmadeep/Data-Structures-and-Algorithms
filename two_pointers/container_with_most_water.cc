#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxVolume(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxVol = 0,vol=0;
        while(left < right) {
            maxVol = max(maxVol, ((min(height[left], height[right])) * (right - left)));
            if(height[left] < height[right]) left++;
            else right--;
        }
        return maxVol;
    }
};

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    Solution sol;
    int result = sol.maxVolume(height);
    cout << result << endl;
    return 0;
}