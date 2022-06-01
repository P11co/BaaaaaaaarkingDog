// https://github.com/encrypted-def/basic-algo-lecture/blob/master/workbook/0x02.md
#include <bits/stdc++.h>

using namespace std;

// 문제 분류 	문제 	문제 제목
// 연습 문제 	10871 	X보다 작은 수
void solve10871() {
    int length, target;
    cin >> length >> target;
    for(int i=0; i<length; i++) {
        int num;
        cin >> num;
        if(num < target) {
            cout << num << " ";
        }
    }

}
// void solve10871() {
//     int n, x, a[10005];
//     cin >> n >> x;
//     for(int i=0; i < n; i++) cin >> a[i];
//     for(int i=0; i < n; i++)
//         if(a[i] < x) cout << a[i] << " ";
// }


// 기본 문제 	1000 	A+B
void solve1000() {
    int A, B;
    cin >> A >> B;
    cout << A + B;
}


// 기본 문제✔ 	2557 	Hello World
void solve2557() {
    cout << "Hello World!";
}


// 기본 문제✔ 	10171 	고양이
void solve10171() {
    cout << "\\    /\\" << "\n"
    << " )  ( ')" << "\n"
    << "(  /  )" << "\n"
    << " \\(__)|";
}


// 기본 문제✔ 	10869 	사칙연산
void solve10869() {
    int A, B;
    cin >> A >> B;
    cout << A + B << "\n";
    cout << A - B << "\n";
    cout << A * B << "\n";
    cout << A / B << "\n";
    cout << A % B << "\n";
}


// 기본 문제✔ 	9498 	시험 성적
void solve9498() {
    int score;
    cin >> score;
    if(score >= 90 and score <= 100) cout << "A";
    else if(score >= 80) cout << "B";
    else if(score >= 70) cout << "C";
    else if(score >= 60) cout << "D";
    else cout << "F";
}


// 기본 문제✔ 	2752 	세수정렬
void solve2752() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c;
    // Method 1 (C++98)
    d = min(min(a, b), min(b, c));
    f = max(max(a, b), max(b, c));
    // Method 2 (C++11 ~)
    d = min({a, b, c});
    f = min({a, b, c});
    // Method 3 (C++11 ~)
    vector<int> vect = {a, b, c}; 
    d = *min_element(vect.begin(), vect.end());
    f = *max_element(vect.begin(), vect.end());
    e = a + b + c - d - f;
    cout << d << " " << e << " " << f << "\n";
}


// 기본 문제✔ 	2753 	윤년
void solve2753() {
    // input
    int ipt;
    cin >> ipt;
    // algorithm
    if(ipt % 400 == 0) cout << 1;
    else if(ipt % 100 == 0) cout << 0;
    else if(ipt % 4 == 0) cout << 1;
    else cout << 0;
}


// 기본 문제✔ 	2480 	주사위 세개
void solve2480() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b and b == c) cout << 10000 + a * 1000;
    else if(a == b or b == c) cout << 1000 + b * 100;
    else if(a == c) cout << 1000 + a * 100;
    else cout << max({a, b, c}) * 100;
}


// 기본 문제✔ 	2490 	윷놀이
void solve2490() {
    for(int i=0; i<3; i++) {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d;
        e = a + b + c + d;
        if(e == 1) cout << "C" << "\n";
        else if(e == 2) cout << "B" << "\n";
        else if(e == 3) cout << "A" << "\n";
        else if(e == 4) cout << "E" << "\n";
        else if(e == 0) cout << "D" << "\n";
    }
}


// 기본 문제✔ 	2576 	홀수
void solve2576() {
    int ipt, odds, min_odd;
    min_odd = 99;
    odds = 0;
    for(int i=0; i<7; i++) {
        cin >> ipt;
        if(ipt % 2 == 1) {
            odds += ipt;
            min_odd = min(min_odd, ipt);
        }
    }
    if(odds == 0) cout << -1;
    else cout << odds << "\n" << min_odd;
}


// 기본 문제✔ 	2587 	대표값2
void solve2585() {

}


// 기본 문제✔ 	2309 	일곱 난쟁이
void solve2309() {

}


// 기본 문제✔ 	10093 	숫자
void solve10093() {

}


// 기본 문제✔ 	1267 	핸드폰 요금
void solve1267() {

}


// 기본 문제✔ 	10804 	카드 역배치
void solve10804() {

}


// 기본 문제✔ 	15552 	빠른 A+B
void solve15552() {

}


// 기본 문제✔ 	2438 	별 찍기 - 1
void solve2438() {

}


// 기본 문제✔ 	2439 	별 찍기 - 2
void solve2439() {

}


// 기본 문제✔ 	2440 	별 찍기 - 3
void solve2440() {

}


// 기본 문제✔ 	2441 	별 찍기 - 4
void solve2441() {

}


// 기본 문제✔ 	2442 	별 찍기 - 5
void solve2442() {

}


// 기본 문제✔ 	2443 	별 찍기 - 6
void solve2443() {

}


// 기본 문제✔ 	2444 	별 찍기 - 7
void solve2444() {

}


// 기본 문제✔ 	2445 	별 찍기 - 8
void solve2445() {

}


// 기본 문제✔ 	2446 	별 찍기 - 9
void solve2446() {

}


// 기본 문제✔ 	2562 	최댓값
void solve2562() {

}


int main() {
    ios::sync_with_stdio(false);     // Alternately, replace "false" or "nullptr" with "0"
    cin.tie(nullptr);

    // solve10871();       // X보다 작은 수
    // solve1000();        // A+B
    // solve2557();        // Hello World
    // solve10171();       // 고양이
    // solve10869();       // 사칙연산
    // solve9498();        // 시험 성적
    // solve2752();        // 세수정렬
    // solve2753();        // 윤년
    // solve2480();        // 주사위 세개
    // solve2490();        // 윷놀이
    solve2576();        // 홀수
    solve2585();        // 대표값2
    solve2309();        // 일곱 난쟁이
    solve10093();       // 숫자
    solve1267();        // 핸드폰 요금
    solve10804();       // 카드 역배치
    solve15552();       // 빠른 A+B
    solve2438();        // 별 찍기 - 1
    solve2439();        // 별 찍기 - 2
    solve2440();        // 별 찍기 - 3
    solve2441();        // 별 찍기 - 4
    solve2442();        // 별 찍기 - 5
    solve2443();        // 별 찍기 - 6
    solve2444();        // 별 찍기 - 7
    solve2445();        // 별 찍기 - 8
    solve2446();        // 별 찍기 - 9
    solve2562();        // 최댓값

    // cout << __cplusplus << "\n";

    return 0;
}