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

}


// 기본 문제✔	3273	두 수의 합
// 기본 문제	10807	개수 세기
// 기본 문제	13300	방 배정
// 기본 문제	11328	Strfry
// 기본 문제	1919	애너그램 만들기

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // solve2577();        // 방 번호
    solve1475();        // 두 수의 합
    // solve3273();
    // solve10807();
    // solve13300();
    // solve11328();
    // solve1919();
}