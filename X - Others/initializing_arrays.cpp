// Numerous ways of initializing C-style arrays
#include <iostream>

using namespace std;

int main(void) {
    // 1. Manual assignment:
    // int array_name[array_length] = {ele1, ele2, ele3, ... eleN}
    int arr1[5] = {1, 2, 3, 4, 5};

    // 2. arrays initialized to zeroes
    // Unspecified assignment leads to default value of fill 0
    int arr2a[10];
    int arr2b[10] = {};

    // 3. array + fill function
    // fill(pointer start, pointer end, fill target N)
    int arr3[10];
    fill(arr3, arr3 + sizeof(arr3), 2);  // for std::array fill(arr3.begin(), arr3.end(), 2);

    // 4. array with specified inputs using for-loops (requires user input)
    /* input example:
    5
    1 3 5 7 9
    */
    int N;
    cin >> N;
    int arr4[N];
    for(int i = 0; i < N; i++) {
        cin >> arr4[i];
    }

    // Printing an array
    for(auto ele: arr4) cout << ele << " ";
}