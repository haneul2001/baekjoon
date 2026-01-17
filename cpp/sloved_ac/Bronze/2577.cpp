#include<iostream>
#include<string>

using namespace std;

int main() {


	int A, B, C;
	cin >> A >> B >> C;
	int num = A * B * C; // ABC 곱한 값
	int length = to_string(num).length(); // 루프하기 위한 값 변형
	int value = 0; // 0부터 9까지 진행 시킬 조건 변수
	string str = to_string(num); //ABC곱한 값 문자화

	for (int i = 0; i < 10; i++) {
		char c = '0' + i;
		int count = 0;
		for (int j = 0; j < str.length(); j++) {
			if (c == str[j]) {
				count++;
			}
		}
		cout << count << endl;
	}

}
