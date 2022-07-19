#include <iostream>
#include <string>
using namespace std;

const int MX = 1000005;
int deq[MX * 2 + 1];
int head = MX, tail = MX;

void push_front(int x) {
  deq[--head] = x;
}

void push_back(int x) {
  deq[tail++] = x;
}

void pop_front() {
  if(head < tail) {
    cout << deq[head++] << "\n";
  }
  else cout << -1 << "\n";
}

void pop_back() {
  if(tail > head) {
    cout << deq[--tail] << "\n";
  }
  else cout << -1 << "\n";
}

int size() {
  return tail - head;
}

int empty() {
  return 1 ? head - tail == 0 : 0;
}

int front() {
  if(!empty()) return deq[head];
  else return -1;
}

int back() {
  if(!empty()) return deq[tail - 1];
  else return -1;
}

int main() {
  int N;
  cin >> N;
  for(int i=0; i<N; i++) {
    string cmd;
    cin >> cmd;
    if(cmd == "push_front" || cmd == "push_back") {
      int x;
      cin >> x;
      if(cmd == "push_front") push_front(x);
      else push_back(x);
    }
    else if(cmd == "pop_front") {
      pop_front();
    }
    else if(cmd == "pop_back") {
      pop_back();
    }
    else if(cmd == "size") {
      cout << size() << "\n";
    }
    else if(cmd == "empty") {
      cout << empty() << "\n";
    }
    else if(cmd == "front") cout << front() << "\n";
    else if(cmd == "back") cout << back() << "\n";
  }
  return 0;
}