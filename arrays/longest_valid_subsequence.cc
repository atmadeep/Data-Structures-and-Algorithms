#include <bits/stdc++.h>

using namespace std;

int main() {
    int counter = 0,max_counter=0;
    vector<int> arr_1 = {2,20,4,10,3,4,5};
    set<int>  s(arr_1.begin(), arr_1.end());

    for(int ele: arr_1){
    if(s.count(ele-1) == 0){
        counter = 1;
        while(s.count(ele+counter)){
        counter++;
        }
        max_counter = max(max_counter,counter);
    }
        max_counter = max(max_counter,counter);
    }
    cout << max_counter << endl;
    return 0;
}