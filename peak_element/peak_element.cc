/*
Given an array arr of n elements that is first strictly increasing and then maybe strictly decreasing, find the maximum element in the array.

Note: If the array is increasing then just print the last element will be the maximum value.
*/

#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<iterator>

using namespace std;

int find_peak(vector<int> array);

int main(){
    string input;
    getline(cin, input);
    istringstream is(input);
    vector<int> input_vector((istream_iterator<int>(is)), istream_iterator<int>());
    cout<<input_vector.size();

}

int find_peak(vector<int> array){
    int length = array.size();
    // Edge cases    
    if(array.size() ==1 ){
        return array[0];
    }
    // First element is the peak i.e strictly decreasing
    if(array[0] >= array[1]){
        return array[0];
    }
    // Last element is the peak i.e strictly increasing
    if(array[length-1] >= array[length-2]){
        return array[length-1];
    }

    for(int i = 1; i< length - 1 ; i++){
        if((array[i] > array[i-1]) && (array[i] > array[i+1])){
            return array[i];
        }
    }

}