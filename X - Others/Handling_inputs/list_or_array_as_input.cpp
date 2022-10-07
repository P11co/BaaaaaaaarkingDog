// Today, we will go over how to parse an input that looks like this: 
// [1,2,3,4,5] or {1,2,3,4,5}
// This was a challenge when I had to solve the problem "AC" on BOJ: https://www.acmicpc.net/problem/5430
// Let's begin!
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Let's imagine our inputs look like this:
// [1,2,3,4,5]
void parse(string str, vector<int> &v) { // we want pass-by-reference so we can keep the modified values
    int cur = 0;
    // Let's first remove the square brackets by setting the boundary (1, v.size() - 1)
    for(int i = 1; i < str.size() - 1; i++) {
        if(str[i] == ',') {
            v.push_back(cur);
            cur = 0;
        }
        else {
            // cout << int(str[i] - '0') << "\n";
            cur = cur * 10 + (str[i] - '0');
        }
    }
    if(cur != 0) v.push_back(cur);
}

int main(void) {
    vector<int> vect;
    string input;
    cin >> input;
    parse(input, vect);
    for(auto c: vect) {
        cout << c << " ";
    }
}