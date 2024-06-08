#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> input_array {1,2,2,4,4,4,4,6,6,5,5,5};
    int max=0,highest_freq_int;
    map<int,int> freq_hash_map;
    for(int var : input_array){
        // The key doesn't exist
        if(freq_hash_map.count(var) == 0){
            freq_hash_map.insert(pair<int,int>(var,1));
        }
        else{
            //Increase frequency counter
            freq_hash_map[var]+=1;
        }
    }
    for(auto value : freq_hash_map){
        //The values is a pair<int,int>
        if(max < value.second){
            max=value.second;
            highest_freq_int = value.first;
        }
    }
    cout<<highest_freq_int<<" : "<<max;
}