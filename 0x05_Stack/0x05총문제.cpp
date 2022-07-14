/* 
Chapter 5 - Stack (https://github.com/encrypted-def/basic-algo-lecture/blob/master/workbook/0x05.md)
연습 문제	10828	스택
기본 문제✔	10773	제로
응용 문제✔	1874	스택 수열
응용 문제✔	2493	탑
응용 문제	6198	옥상 정원 꾸미기
응용 문제	17298	오큰수
응용 문제	3015	오아시스 재결합
응용 문제	6549	히스토그램에서 가장 큰 직사각형
*/

#include <iostream>
#include <stack>
#include <vector>
#define X first
#define Y second
using namespace std;

// 연습 문제	10828	스택
void solve10828() {
  stack<int> stack;
  int N;
  cin >> N;
  for(int i=0; i<N; i++) {
    string cmd;
    cin >> cmd;
    if(cmd == "push") {
      int X;
      cin >> X;
      stack.push(X);
    }
    else if(cmd == "pop") {
      if(!stack.empty()) {
        cout << stack.top() << "\n";
        stack.pop();
      }
      else cout << "-1\n";
    }
    else if(cmd == "size") cout << stack.size() << "\n";
    else if(cmd == "empty") cout << stack.empty() << "\n";
    else {
      if(!stack.empty()) cout << stack.top() << "\n";
      else cout << "-1\n";
    }
  }
}


// 기본 문제✔	10773	제로
void solve10773() {
  int K;
  cin >> K;
  stack<int> memo;
  for(int i=0; i<K; i++) {
    long long int ipt;
    cin >> ipt;
    if(ipt == 0) {
      memo.pop();
    }
    else memo.push(ipt);
  }

  long long int sum = 0;
  while(!memo.empty()) {
    long long int ele = memo.top();
    memo.pop();
    sum += ele;
  }
  cout << sum;
}


// 응용 문제✔	1874	스택 수열
void solve1874() {
  int K;
  cin >> K;

  vector<string> result;
  stack<int> stack;
  int cur = 0;
  bool canPrint = true;
  for(int i=0; i<K; i++) {
    int cmd;
    cin >> cmd;
    while(cmd > cur) {
      stack.push(++cur);
      // cout << cur;
      result.push_back("+\n");
    }
    if(cmd == stack.top()) {
      // cout << stack.top();
      result.push_back("-\n");
      stack.pop();
    }
    else {
      cout << "NO";
      canPrint = false;
      break;
    }
  }

  if(canPrint) {
    for(auto str: result) {
      cout << str;
    }
  }
}


// 응용 문제✔	2493	탑
void solve2493() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  stack<pair<int, int>> stack;
  stack.push({1000000001, 0});
  int N;
  cin >> N;
  for(int i=1; i<=N; i++) {
    int height;
    cin >> height;
    while(stack.top().X < height) stack.pop();
    cout << stack.top().Y << " ";
    stack.push({height, i});
  }
}


// 응용 문제	6198	옥상 정원 꾸미기
void solve6198() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N;
  // take reversed inputs into vector reversed_ipt
  stack<pair<int, long long int>> stk;
  vector<int> reversed_ipt(N, 0);
  for(int i=N-1; i>-1; i--) {
    cin >> reversed_ipt[i];
  }

  // stack algorithm
  long long int output = 0; // TIP: sum(1, 80001) > 2^31-1
  stk.push({1000000001, 0});
  for(int i=0; i<N; i++) {
    int count = 0;
    // while(current < next)
    while(stk.top().X < reversed_ipt[i]) {
      count++; // +1 for prev element
      count += stk.top().Y; // +n for "count" in prev element
      stk.pop();
    }
    stk.push({reversed_ipt[i], count});
    output += count;
  }

  // output
  cout << output << "\n";
}


// 응용 문제	17298	오큰수
void solve17298() {
  int N;
  cin >> N;
  stack<pair<int, int>> stk;
  vector<int> rev_ipt(N, 0);
  vector<int> output(N, 0);

  // take inputs in reversed order
  for(int i=0; i<N; i++) {
    int a;
    cin >> a;
    rev_ipt[N-i-1] = a;
  }

  // for(auto ele: rev_ipt) cout << ele << " ";
  // cout << "\n";

  // stack usage
  stk.push({1000001, -1});
  for(int i=0; i<N; i++) {
    int nxt = rev_ipt[i];
    // cout << i << " " << nxt << "\n";
    while(nxt >= stk.top().first) {
      stk.pop();
    }
    output[N-i-1] = stk.top().second;
    stk.push({nxt, nxt});
  }
  
  // output
  for(int x: output) cout << x << " ";
}


// 응용 문제	3015	오아시스 재결합
void solve3015() {
  int N;
  cin >> N;
  stack<pair<int, int>> stk;
  long long ans = 0;
  for(int i=0; i<N; i++) {
    int K;
    cin >> K;
    int cnt = 1;
    while(!stk.empty() and K >= stk.top().X) {
      ans += stk.top().Y;
      if(K == stk.top().X) cnt += stk.top().Y;
      stk.pop();
    }
    if(!stk.empty()) ans++;
    stk.push({K, cnt});
  }

  // output phase
  cout << ans << "\n";
}


// 응용 문제	6549	히스토그램에서 가장 큰 직사각형
void solve6549() {
  // too difficult -> solve later
}


int main(void) {
    // solve10828();     // 스택
    // solve10773();     // 제로
    // solve1874();      // 스택 수열
    // solve2493();      // 탑
    // solve6198();      // 옥상 정원 꾸미기
    // solve17298();     // 오큰수
    // solve3015();      // 오아시스 재결합
    solve6549();      // 히스토그램에서 가장 큰 직사각형
}