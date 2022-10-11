// Different ways of initializing a std::vector
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    // 1. Manual assignment
    vector<int> v1a = {1, 2, 3, 4, 5};
    vector<int> v1b {6, 7, 8, 9, 10};
    vector<int> v1c;
    v1c.push_back(10);
    v1c.push_back(20);
    v1c.push_back(30);
    // 2. Initialization to any value
    vector<int> v2(25, 8);
    fill(v2.begin(), v2.end(), 888);
    // 3. Initialization from another vector or array
    //      a. another vector
    vector<int> v3a(v2.begin(), v2.end());
    //      b. another array
    int arr[] = {0, 1, 0, 1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> v3b(arr, arr + sizeof(arr)/sizeof(arr[0]));

    // Output
    for(auto ele: v2) cout << ele << " ";
}