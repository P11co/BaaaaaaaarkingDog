// 균형잡힌 세상 - https://www.acmicpc.net/problem/4949
#include <stack>
#include <string>
#include <iostream>
using namespace std;

int main(void) {
  string line;
  getline(cin, line);
  while(line != ".") {
    stack<char> stk;
    for(int i = 0; i < line.size(); i++) {
      if(stk.empty()) {
        if(line[i] == '[' or line[i] == '(') {
          stk.push(line[i]);
        }
        else if(line[i] == ']' or line[i] == ')') {
          stk.push(line[i]);
          break;
        }
      }
      else if(!stk.empty()) {
        if(stk.top() == '[' and line[i] == ']') {
          stk.pop();
        }
        else if(stk.top() == '(' and line[i] == ')') {
          stk.pop();
        }
        else if(line[i] == ']' or line[i] == ')') {
          stk.push(line[i]);
          break;
        }
        else if(line[i] == '[' or line[i] == '(') {
          stk.push(line[i]);
        }
      }
    }
    if(stk.empty()) {
      cout << "yes\n";
    }
    else if(!stk.empty()) {
      cout << "no\n";
    }
    getline(cin, line);
    }
}