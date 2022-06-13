#include <bits/stdc++.h>
#include <iostream>
// #include <sstream>
// #include <string>
using namespace std;

// 기본 문제✔	2577	숫자의 개수
void solve2577() {
    int numarr[10] = {0};
    int a, b, c;
    cin >> a >> b >> c;
    int ans = a * b * c;
    while(ans != 0) {
        int last_digit = ans % 10;
        // cout << last_digit << "\n";
        numarr[last_digit]++;
        ans /= 10;
    }
    for(int i=0; i<10; i++) cout << numarr[i] << "\n";
}


// 기본 문제✔	1475	방 번호
void solve1475() {
    // arr holds the number of appearances of each digit
    long long int arr[9] = {0};
    bool flag = false;
    int ipt;
    cin >> ipt;
    
    // handling of special case "0"
    if(ipt == 0) {
      cout << 1 << "\n";
      flag = true;
    }
    
    // increments arr[last_digit] for every last_digit
    while(ipt != 0) {
      int last_digit = ipt%10;
      if(last_digit == 9) arr[6]++;    // all "9"s are incremented into arr[6]
      else arr[last_digit]++;
      ipt = ipt / 10;
    }

    // basic idea: max(count of 6 or 9s, count of all other digits)
    // 1. frequency (count) of sixes and nines
    int sixth;
    if(arr[6] % 2 == 0) sixth = arr[6]/2;
    else sixth = arr[6]/2 + 1;
    arr[6] = 0;

    // 2. frequency of numbers other than 6 and 9
    int greatest = 0, idx = -1;
    for(int i=0; i<9; i++) {
      if(arr[i] > greatest) {
        greatest = arr[i];
        idx = i;
      }
    }

    // final comparison
    if(flag == false) {
      if (greatest > sixth) cout << greatest;
      else cout << sixth;
    }
}


// 기본 문제✔	3273	두 수의 합
int solve3273() {

}


// 기본 문제	10807	개수 세기
int solve10807() {
    // input
    int n, v;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    cin >> v;

    // algorithm
    int sum = 0;
    for(int ele: arr) if(ele == v) sum++;
    cout << sum;
}
// 기본 문제	13300	방 배정
// 기본 문제	11328	Strfry
// 기본 문제	1919	애너그램 만들기

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // solve2577();        // 방 번호
    // solve1475();        // 두 수의 합
    // solve3273();        // 
    // solve10807();       //
    // solve13300();       //
    // solve11328();       //
    // solve1919();        //
}