#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

void remove_duplicates(int arr[], int size){
    int unique_count = 0;
    
    if (size == 0) return;
    else if (size == 1) cout << arr[0] << endl << size << endl;
    else {
        for (int i = 0; i < size; i++) {
            if (arr[i] != arr[i + 1]) {
                unique_count++;
            }
        }

        cout << "Size after removal: " << unique_count << endl;

        int temp[unique_count];
        int j = 0;
        for(int i=0; i < size; i++) {
            if(arr[i] != arr[i+1]) temp[j++] = arr[i];
        }

        cout << "Unique elements in the array: ";
        for (int i = 0; i < unique_count; i++) {
            cout << temp[i] << ' ';
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {1, 1, 1, 1, 1, 1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6};
    int arr1[] = {};
    int size = sizeof(arr) / sizeof(arr[1]);

    cout << "Original size before removal: " << size << endl;

    remove_duplicates(arr, size);
    return 0;
}