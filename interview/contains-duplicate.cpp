#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

// dont use nums[i] == nums[i+1], it will cause memory corruption

bool contain_duplicate(vector<int> nums) {
    sort(nums.begin(), nums.end());
    int check = nums[0];
	for(int i=1; i<nums.size(); i++) {
        if(nums[i] == check) return true;
        else check = nums[i];
    }

    return false;
}

// bool containsDuplicate(vector<int>& nums) {
// 	if (nums.size() == 0 || nums.size() == 1) {
// 		return false;
// 	}
// 	unordered_set<int> check;
// 	for (auto item : nums) {
// 		if (check.contains(item)) {
// 			return true;
// 		} else {
// 			check.insert(item);
// 		}
// 	}
// 	return false;
// }

int main(int argc, char const *argv[])
{
	vector<int> nums;
	int size = 0, temp, k;
	cin >> size;
	if (size == 0 || size == 1) {
        cout << "false" << endl;
    }
	else if (size > 1) {
        for(int i = 0; i<size; i++) {
            cin >> temp;
            nums.push_back(temp);
        }

        bool result = contain_duplicate(nums);
        if(result == 1) cout << "true" << endl;
        else if(result == 0) cout << "false" << endl;
	}
	return 0;
}
