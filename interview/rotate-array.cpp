#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;
using std::endl;
using std::cout;
using std::cin;

void rotate(vector<int> nums, int k) {
    if(k == 0 || k == nums.size()) {
		for (auto i : nums)
			cout << i << " ";
	}
    else {
		k = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin()+k, nums.end());
        reverse(nums.begin(), nums.begin()+k);
        for(auto i: nums) 
            cout << i << " ";
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
	vector<int> nums;
	int size=0, temp, k;
    cin >> size;
    
    if(size == 0) 
        return 0;
    else if(size == 1)
		cout << nums[0] << endl;
	else if(size > 1) {
		for (int i = 0; i < size; i++) {
			cin >> temp;
			nums.push_back(temp);
		}
		cin >> k;
		rotate(nums, k);
	}
    return 0;
}