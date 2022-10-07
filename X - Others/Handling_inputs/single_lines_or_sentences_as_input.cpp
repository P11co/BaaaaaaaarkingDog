// In C++, it is easy to take inputs that are separated by spaces
// but, what if we want to take an entire line of input?
// ex. "The lazy fox jumps over the... etc"
// We shall use std::getline!
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string str;
    // usually, we take inputs like this:
    // cin >> str;
    // but to take an entire line of input, do this:
    getline(cin, str);
    // Input: "This is an entire sentence"
    cout << str << "\n"; // Output: "This is an entire sentence"
}

// That will be all!