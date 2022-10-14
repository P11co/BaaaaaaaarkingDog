// 시리얼 번호: https://www.acmicpc.net/problem/1431
// Objective: Apply the STL sort algorithm here...
#include <iostream>     // cin, cout
#include <string>       // string indexing
#include <algorithm>    // sort
using namespace std;

int N;
string arr[50];

bool rule1(const string& a, const string& b) {
    return a.size() < b.size();
}

bool rule2(const string& a, const string& b) {
    int suma = 0, sumb = 0;
    for(string::size_type i = 0; i < a.size(); i++) {   // use string::size_type -> int cannot be compared with a.size() {unsigned long int}
        if(a[i] > 47 && a[i] < 58) suma += a[i] - 48;
    }
    for(string::size_type i = 0; i < b.size(); i++) {
        if(b[i] > 47 && b[i] < 58) sumb += b[i] - 48;
    }
    // cout << suma << " " << sumb;
    return suma < sumb;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // input
    cin >> N;
    for(int i = 0; i < N; i++) cin >> arr[i];

    // algorithm
    /* 
    - Priorities -
    1. shortest string comes first
    2. if the length are same, the smaller sum of ints come first
    3. if 1~2 are same, use alphanumeric dictionary order (challenge) 
    
    - Sort order: 3, 2, 1 -
    */

    sort(arr, arr + N);         // lexicographical order
    sort(arr, arr + N, rule2);  // sum of int, increasing order
    sort(arr, arr + N, rule1);  // arranged by length

    for(int i = 0; i < N; i++) cout << arr[i] << "\n";
}