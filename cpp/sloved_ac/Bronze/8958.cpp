#include<iostream>
#include<string>

using namespace std;

int main() {
	int T;
	cin >> T;
	int n = 0;
	for (int i = 0; i < T; i++) {
		string s;
		cin >> s;
		int count = 0, result = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'O') {
				count++;
				result += count;
			}
			else
				count = 0;

		}
		cout << result << endl;
	}
}
