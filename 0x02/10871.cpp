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
    // d = min({a, b, c});
    // f = min({a, b, c});
    // Method 3
    // vector<int> vect = {a, b, c}; 
    // d = *min_element(vect.begin(), vect.end());
    // f = *max_element(vect.begin(), vect.end());
    e = a + b + c - d - f;
    cout << d << " " << e << " " << f << "\n";
}


// 기본 문제✔ 	2753 	윤년
void solve2753() {

}


// 기본 문제✔ 	2480 	주사위 세개
void solve2480() {

}




int main() {
    ios::sync_with_stdio(false);     // Alternately, replace "false" or "nullptr" with "0"
    cin.tie(nullptr);

    // solve10871();    // X보다 작은 수
    // solve1000();     // A+B
    // solve2557();     // Hello World
    // solve10171();    // 고양이
    // solve10869();    // 사칙연산
    // solve9498();     // 시험 성적
    solve2752();      //세수정렬
    cout << __cplusplus << "\n";

    return 0;
}