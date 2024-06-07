/*
*Given an array arr[] of non-negative integers and an integer sum, find a subarray that adds to a given sum.

*Note: There may be more than one subarray with sum as the given sum, print first such subarray. 
*/

#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<iterator>

void find_subarray(std::vector<int> array, int SUM);

int main(){
    std::string input;
    std::getline(std::cin,input);
    std::istringstream is(input);
    std::vector<int> input_vector((std::istream_iterator<int>(is)), std::istream_iterator<int>());
    int SUM=0;
    std::cin>>SUM;
    find_subarray(input_vector,SUM);
    return 0;
}

void find_subarray(std::vector<int> array, int SUM){
    int start = 0, end = 1;
    int current_sum = array[0];
    while(end <= array.size()){
        /*
        While the current sum is smaller than SUM;
        add elements from the end. 
        */
       while((current_sum < SUM) && (start < end - 1)){
            current_sum = current_sum - array[start];
            start++;
       }

       if(current_sum == SUM){
            std::cout<<"\nIndexes are "<<start<<"  "<<end;
            return;
       }

       if(end < array.size()){
            current_sum = current_sum + array[end];
       }
       end++;
    }
   std::cout<<"\nNo subarray found\n";
   return;
}

