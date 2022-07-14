/*
Chapter 6 - https://github.com/encrypted-def/basic-algo-lecture/blob/master/workbook/0x06.md
문제 분류	문제	문제 제목
연습 문제	10845	큐
기본 문제✔	18258	큐 2
기본 문제✔	2164	카드2
*/

#include <queue>
#include <iostream>
using namespace std;


// 연습 문제	10845	큐
void solve10845() {
  int N;
  queue<int> q;
  cin >> N;
  for(int i=0; i<N; i++) {
    string cmd;
    cin >> cmd;
    if(cmd == "push") {
      int x;
      cin >> x;
      q.push(x);
    }
    else if(cmd == "pop") {
      if(q.empty()) cout << -1 << "\n";
      else {
        cout << q.front() << "\n";
        q.pop();
      }
    }
    else if(cmd == "size") cout << q.size() << "\n";
    else if(cmd == "empty") cout << q.empty() << "\n";
    else if(cmd == "front") {
      if(q.empty()) cout << -1 << "\n";
      else cout << q.front() << "\n";
    }
    else {
      if(q.empty()) cout << -1 << "\n";
      else cout << q.back() << "\n";
    }
  }
}


// 기본 문제✔	18258	큐 2
void solve18258() {

}


// 기본 문제✔	2164	카드2
void solve2164() {

}


int main() {
    // solve10845();           // 큐
    solve18258();           // 큐2
    solve2164();            // 카드2
    return 0;
}