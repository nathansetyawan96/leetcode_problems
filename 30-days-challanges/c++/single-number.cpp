#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int> &nums)
    {
        int x = 0;
        for (int a : nums)
        {
            x ^= a;
        }
        return x;
    }
};

int main () {
    Solution input;
    vector<int> arr = {1,2,1};
    cout << input.singleNumber(arr) << endl;
    return 0;
}