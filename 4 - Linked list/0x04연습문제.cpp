// 연습 문제 	1406 	에디터

#include <iostream>
#include <list>
// #include <iterator>
using namespace std;

int main(void) {
  // initialize editor and push back starting word
  list<char> editor;
  list<char>::iterator t = editor.end();
  string word;
  cin >> word;
  for(char c: word) editor.push_back(c);

  // commands
  int N;
  cin >> N;
  for(int i=0; i<N; i++) {
    char command;
    cin >> command;
    if(command == 'L' and t != editor.begin()) t--;
    else if(command == 'D' and t != editor.end()) t++;
    else if(command == 'B' and t != editor.begin()) {
      t--;
      t = editor.erase(t);
    }
    else if(command == 'P') {
      char c;
      cin >> c;
      editor.insert(t, c);
    }    
    // for(auto c: editor) cout << c;
    // cout << "\ni: " << i << "\tt: " << distance(editor.begin(), t) << "\n";
  }

  // final result
  for(auto c: editor) cout << c;
}