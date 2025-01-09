/*
#include<vector>
#include<algorithm>
#include<numeric>
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty()){
            return 0;
        }
    int left_pointer = 0, right_pointer = height.size()-1;
    int leftmax = height[left_pointer], rightmax = height[right_pointer];
    int current_capacity = 0;

    while(left_pointer < right_pointer){
        if(leftmax < rightmax){
            left_pointer++;
            leftmax = max(leftmax, height[left_pointer]);
            current_capacity += leftmax - height[left_pointer];
        }else{         
            right_pointer--;
            rightmax = max(rightmax, height[right_pointer]);
            current_capacity += rightmax - height[right_pointer];
        }
    }
    return current_capacity;
    }
};


int main(){
    vector<int> heights = {0,1,0,2,1,0,1,3,2,1,2,1};
    Solution s;
    cout<<s.trap(heights)<<endl;
}