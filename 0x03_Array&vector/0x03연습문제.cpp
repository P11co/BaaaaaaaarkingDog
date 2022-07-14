#include <iostream>
#include <vector>

using namespace std;

// 연습 문제	10808	알파벳 개수     https://www.acmicpc.net/problem/10808
// 1. STL vector 풀이 (직관적)
// 특: for-loop을 사용하여 i를 iterate하며 푼다
// 주의점: for(int i=0; i<vector.size(); i++)   VS.  for(int i=0; i<=vector.size()-1; i++) 의 차이를 의식한다
void func1_vector() {
    vector<int> v;
    string boj, alphabet = "abcdefghijklmnopqrstuvwxyz";
    cin >> boj;
    for(int i=0; i<alphabet.length(); i++) {
        int cnt = 0;
        for(int j=0; j<boj.length(); j++) {
            if(alphabet[i] == boj[j]) {
                cnt += 1;
                // cout << alphabet[i] << " " << boj[j] << " " << cnt << "\n";
            }
        }
        v.push_back(cnt);
    }

    for(int k=0; k<v.size(); k++) cout << v[k] << " ";
}

// 2. 강의에서 다룬 "range-based for-loop (available since C++11)" (ft. C++ array)
void func1_rangebased_forloop() {
    int arr[26] = {};
    string word;
    cin >> word;
    char a = 'a';
    for(char c: word) {
        arr[c - a] += 1;
    }
    for(int element: arr) cout << element << " ";
    // for(int i=0; i<26; i++) cout << arr[i] << " ";
}


// int func2(int arr[], int N) {
//     int vis[100] = {};
//     for(int ele: arr) {
//         if 
//     }
//     return 0;
// }


int main(void) {
    // func1_vector();
    // func1_rangebased_forloop();
    func2({1, 52, 48}, 3);
}