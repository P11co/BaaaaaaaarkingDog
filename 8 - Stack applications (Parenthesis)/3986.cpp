// 좋은 단어 - https://www.acmicpc.net/problem/3986
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void) {
  int N;
  cin >> N;
  int sum = 0;
  for(int i = 0; i < N; i++) {
    stack<char> stk;
    string line;
    cin >> line;
    for(int j = 0; j < line.size(); j++) {
      if(stk.empty()) {
        if(line[j] == 'A' or line[i] == 'B') {
          stk.push(line[j]);
        }
      }
      else if(!stk.empty()) {
        if(stk.top() == line[j]) {
          stk.pop();
        }
        else {
          stk.push(line[j]);
        }
      }
    }
    if(stk.empty()) sum++;
  }
  cout << sum << "\n";
}