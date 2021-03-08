#include <iostream>
#include <vector>
using std::cout;
using std::endl;

int remove_duplicates(std::vector<int>& numbers) {
	int length = numbers.size();
	int counter = 0;

	if (length == 0)
		return 0;
	else if (length == 1)
		return 1;
	else {
		for (int i = 0; i < length; ++i) {
			if (numbers[i] != numbers[i + 1])
				counter++;
		}
	}
	return counter;
}

int main(int argc, char const* argv[]) {
	std::vector<int> numbers{1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 5, 6};

	cout << "Original size before removal: " << numbers.size() << endl;

	int result = remove_duplicates(numbers);

	cout << result << endl;

	return 0;
}
