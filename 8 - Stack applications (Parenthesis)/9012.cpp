// 괄호 - https://www.acmicpc.net/problem/9012
#include <string>
#include <stack>
#include <iostream>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    for(int i = 0; i < N; i++) {
        string line;
        cin >> line;
        stack<char> stk;
        for(int j = 0; j < line.size(); j++) {
            if(stk.empty()) {
                if(line[j] == '(') stk.push(line[j]);
                else if(line[j] == ')') {
                    stk.push(line[j]);
                    break;
                }
            }
            else if(!stk.empty()) {
                if(line[j] == '(') stk.push(line[j]);
                else if(stk.top() == '(' and line[j] == ')') stk.pop();
            } 
        }
        if(stk.empty()) cout << "YES\n";
        else if(!stk.empty()) cout << "NO\n";
    }
}