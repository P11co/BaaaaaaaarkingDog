#include <iostream>
#include <list>
#include <iterator>
using namespace std;

// 기본 문제✔ 	5397 	키로거
void solve5397() {
    list<char> keylogger;
    int TC;
    cin >> TC;
    for(int i=0; i<TC; i++) {
    list<char>::iterator it = keylogger.end();
    string keylog;
    cin >> keylog;
    for(char c: keylog) {
        // cout << "c:" << c;
        if(c == '<') {
        if(it != keylogger.begin()) it--;
        } 
        else if(c == '>') {
        if(it != keylogger.end()) it++;
        }
        else if(c == '-') {
        if(it != keylogger.begin()) {
            it--;
            it = keylogger.erase(it);
        }
        }
        else keylogger.insert(it, c);
        // cout << "\tit: "<< distance(keylogger.begin(), it) << '\n';
    }
    for(char c: keylogger) cout << c;
    cout << "\n";
    keylogger.clear();
    }
}


// 기본 문제✔ 	1158 	요세푸스 문제
void solve1158() {
  list<int> josephus;
  vector<int> result;
  int N, K;
  cin >> N >> K;
  for(int i=1; i<N+1; i++) josephus.push_back(i);
  list<int>::iterator it = josephus.begin();
  for(int i=1; i<N; i++) {
    if(i < K) it++;
  }
  while(josephus.size() > 0) {
    // cout << *it << "\t";
    result.push_back(*it);
    it = josephus.erase(it);
    for(int i=0; i<2; i++) {
      if(it == josephus.end()) it++;
      it++;
      if(it == josephus.end()) it++;
    }
  }
  // output
  cout << "<";
  for(int i=0; i<result.size(); i++) {
    if(i == result.size() - 1) cout << result[i];
    else cout << result[i] << ", ";
  }
  cout << ">";
}


int main(void) {
    // solve5397();        // 키로거
    // solve1158();        // 요세푸스 문제
}