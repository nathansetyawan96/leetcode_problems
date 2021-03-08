#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// // XOR Bit Manipulation
// int singleNumber(vector<int> nums) {
//     int single_number = 0;

//     for(auto i: nums) single_number ^= i;

//     return single_number;
// }

int singleNumber(vector<int> nums) {
    unordered_map<int,int> nums_map;

    for(auto i: nums) 
        nums_map[i]++;

    for(auto i: nums_map) 
        if(i.second == 1) return i.first;

    return 0;
}

int main(int argc, char const *argv[])
{
    int size, temp;
    vector<int> nums;
    cin >> size;
    for(int i = 0; i < size; i++) {
        cin >> temp;
        nums.push_back(temp);
    }

    cout << singleNumber(nums) << endl;
    return 0;
}
