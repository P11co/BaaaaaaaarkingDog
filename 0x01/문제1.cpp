#include <iostream>
#include <cmath>

using namespace std;

// O(N)
int func1(int N) {
    int x = 0;
    for(int i=0; i<=N; i++) {
        if (i % 3 == 0 or i % 5 == 0) x = x + 1;
    }
    return x;
}


// O(N**2)
// 정확히는(N**2 - N)/2, O(N)
int func2(int arr[], int arr_size) {
    for(int i=0; i<arr_size; i++) {
        for(int j=i; j<arr_size; j++) {
            if(arr[i] + arr[j] == 100) return 1;
        }
    }
    return 0;
}

// O(sqrt(N))
int func3(int n) {
    if (pow(sqrt(n), 2) == n) return 1;
    return 0;
}

// O(log(n))
int func4(int n) {
    int val = 1;
    while (val*2 <= n) val *= 2;
    return val;
}

int main() {
    //func1
    // int a1 = func1(20);
    // cout << a << endl;

    //func2
    // int foo[] = {1, 100, 3};
    // int a2 = func2(foo, 3);
    // cout << result << endl;

    //func3
    // int a3 = func3(100); 
    // int b3 = func3(7);
    // cout << a3 << endl;
    // cout << b3 << endl;

    //func4
    // int a4 = func4(1024);
    // int b4 = func4(5);
    // cout << a4 << endl;
    // cout << b4 << endl;
    return 0;
}

