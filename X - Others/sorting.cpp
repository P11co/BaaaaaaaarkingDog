/* Since there are so many types of sort algorithms, I have decided to arrange them here for convenience.
0. STL sort
1. Selection sort
2. Insertion sort
3. Bubble sort
4. Mergesort
5. Quicksort
6. Counting sort
7. Radix sort

Best, worst, average time complexity and space complexity are arranged here: https://en.wikipedia.org/wiki/Sorting_algorithm#Comparison_of_algorithms
*/
#include <iostream>     // input and output
#include <vector>       // Tip: <vector> is required for the "swap" method!
#include <algorithm>    // STL sort
using namespace std;

int N = 10;
int arr[] = {-100, 100, -25, 25, 32, 32, 72, 81, 9, 0};

// 0. STL Sort: if <algorithm> header is allowed
void stl_sort() {
    int ans[N];
    copy(arr, arr + N, ans); // <algorithm>/copy
    sort(ans, ans + N);
    for(auto ele: ans) cout << ele << " ";
}

// 1. Selection sort: Easy code; useful when under low memory limits; O(N^2)
void selection_sort() {
    vector<int> ans(arr, arr + N);
    for(int i = N; i > 0; i--) {
        int max_idx = 0;
        for(int j = 1; j < i; j++) {
            if(ans[j] > ans[max_idx]) max_idx = j;  // find max in sublist ans[0:i]
            swap(ans[max_idx], ans[i - 1]);         // swap(max value in sublist with ans[i])
        }
    }
    for(auto ele: ans) cout << ele << " ";
}


void insertion_sort() {
    vector<int> ans(arr, arr + N);
    for(int i = 0; i < N - 1; i++) {
        int first_idx = i, second_idx = i + 1;
        while(ans[first_idx] > ans[second_idx] && first_idx != 0) {
            swap(ans[first_idx--], ans[second_idx--]);
            // for(auto ele: ans) cout << ele << " ";
            // cout << "\n";
        }
    }
    for(auto ele: ans) cout << ele << " ";
}

void bubble_sort() {
    vector<int> ans(arr, arr + N);
    for(int i = 0; i < N; i++) {

    }
}

// 6. Counting sort
void counting_sort() {

}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // stl_sort();
    // selection_sort();
    // insertion_sort();
    // bubble_sort();

    // counting_sort();
}