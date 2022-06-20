#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
  set<char> word;
  cout << "Set wordle" << endl;
  string str;
  getline(cin, str);

  // setting up word set
  for (int i = 0; i < str.length(); i++) {
    word.insert(str[i]);
  }
  int j_c = 0;
  for (auto it = word.begin(); it != word.end(); it++) {
    cout << *it;
  }
  int arr[6][5];
  cout << endl;
  int win = 0;
  for (int i = 0; i < 6; i++) {
		
    string str2;
    cout << "Enter your word" << endl;
    cin >> str2;
		
    for (int j = 0; j < 5; j++) {
			
      if (str2[j] == str[j]) {
        arr[i][j] = 1;
        win++;
      } 
			
			else if (word.find(str2[j]) != word.end()) {
        arr[i][j] = -1;
      } 
			
			else {
        arr[i][j] = 0;
      }
    }
		    for (int j = 0; j < 5; j++) {
      cout << arr[i][j] << " ";
    }
		cout << endl;
		if(str.compare(str2)==0){
				cout << "word found congrats" << endl;
			  j_c = i;
				break;
			}
  }
  
  for (int i = 0; i < j_c+1; i++) {
    for (int j = 0; j < 5; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
		
  }

		
}