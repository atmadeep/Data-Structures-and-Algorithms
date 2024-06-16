#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target);

int main(){
    vector<int> array{1,4,2,6,3,5,8};
    int target = 10;
    vector<int> indices;
    indices = twoSum(array,target);
    // The indices vector contains 1st and 2nd index.
    cout<<indices[0]<<" "<<indices[1];
    return 0;
}

vector<int> twoSum(vector<int>& nums, int target) {

    vector<int> indices;
    vector<pair<int,int>> array;
    pair<int,int> temp;
    for (int i=0;i<nums.size();i++){
        temp.first = nums[i];
        temp.second = i;
        array.push_back(temp);
    }
    int small = 0;
    int high = nums.size()-1;
    // Sort the array.
    std::sort(array.begin(), array.end(),[](pair<int,int>&a, pair<int,int> &b){return a.first < b.first;});

    while(small < high){
        if(array[small].first + array[high].first  == target){
            //return both the indices
            indices.push_back(array[small].second);
            indices.push_back(array[high].second);
            return indices;
        }
        if(array[small].first + array[high].first < target){
            small++;
        }else if(array[small].first + array[high].first > target){
            high--;
        }
    }
return indices;
}
