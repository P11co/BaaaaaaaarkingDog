#include <iostream>
#include <cmath>

using namespace std;

/* Key points:
1. Time-space complexity and O(N) notation
2. Data types and their limitations (overflow) - 정수형, 실수형 (integer, float type)
*/

// 1. 시간-공간 복잡도 연습
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

    // 정수형, 실수형 종류 (overflow)
    /*  Integer Data type,      Bytes,          Range
    signed char                 (1)             -(2**7)     to 2**7 - 1
    unsigned char               (1)             -(2**8)     to 2**8 - 1
    short int (signed)          (2)             -(2**15)    to 2**15 - 1
    unsigned short int          (2)             0           to 2**16 - 1
    unsigned int                (4)             0           to 2**32 - 1        
    int (signed)                (4)             -(2**31)    to 2**31 - 1
    unsigned long int           (4)             0           to 2**32 - 1
    long int (signed)           (4)             -(2**31)    to 2**31 - 1           
    long long int (signed)      (8)             -(2**63)    to (2**63) - 1
    unsigned long long int      (8)             0           to 2**64 - 1
        Float Data type,        sign,       exponent,       fraction field
    float                       1 bit       8 bits          23 bits
    double                      1 bit       11 bits         52 bits
    long double                 1 bit
    */

    // Adding 1 sends y to the negative space (for signed types)
    // short y = pow(2, 15) - 1;
    // cout << y << "\n";
    // y += 1;
    // cout << y << "\n";

    // Adding 1 sends x to 0 (for unsigned types)
    // unsigned int x = pow(2, 32) - 1;
    // cout << x << "\n";
    // x += 1;
    // cout << x << "\n";
    // x = -2;
    // cout << x << "\n";

    return 0;
}

