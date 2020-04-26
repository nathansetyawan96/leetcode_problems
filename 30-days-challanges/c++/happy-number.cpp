#include <iostream>
#include <unordered_set>

using namespace std;

class Solution {
    int exp_sum (int integer) {
        int sum = 0, digit = 0;
        while(integer) {
            digit = integer % 10;
            integer = integer / 10;
            sum += digit * digit;
        }
        return sum;
    }

public:
    bool isHappy(int num) {
        unordered_set<int> visited;
        for(int i = 0; i < 20; i++) {
            if(num == 1) return true;
            num = exp_sum(num);
            if (visited.count(num) == 1) return false;
            visited.insert(num);
        }
    }
};

int main() {
    Solution input;
    cout << input.isHappy(19);
    return 0;
}