// 배열 합치기: https://www.acmicpc.net/problem/11728
// This question is emphasized because of its importance in mergesort
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  // input
  int N, M;
  cin >> N >> M;
  vector<long long int> vectA(N, 0);
  vector<long long int> vectB(M, 0);
  for(int i = 0; i < N; i++) cin >> vectA[i];
  for(int j = 0; j < M; j++) cin >> vectB[j];
  
  // merging
  vector<long long int> ans;
  // cout << *(vectA.end() - 1);
  for(int i = 0; i < N + M; i ++) {
    if(vectA.empty() or vectB.empty()) {
      if(vectA.empty()) {
        ans.push_back(*(vectB.end() - 1));
        vectB.pop_back();
      }
      else {
        ans.push_back(*(vectA.end() - 1));
        vectA.pop_back();
      }
    }
    else {
      if(*(vectA.end() - 1) > *(vectB.end() - 1)) {
        ans.push_back(*(vectA.end() - 1));
        vectA.pop_back();
      }
      else {
        ans.push_back(*(vectB.end() - 1));
        vectB.pop_back();
      }
    }
  }

  // output
  // for(auto i: ans) cout << i << " ";
  for(auto i = ans.end() - 1; i != ans.begin() - 1; i--) cout << *i << " "; 
}

// Reviewed by: sukam09
/*  시간초과 -> added lines:

ios::sync_with_stdio(0);
cin.tie(0);

*/