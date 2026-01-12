#include<iostream>
#include<string>
using namespace std;
int main() {
	int A, B, C;
	cin >> A >> B >> C;

	//A+B-C 정수형
	cout << A + B - C << endl;

	//A+B-C 문자열
	cout << stoi(to_string(A) + to_string(B)) - C;
}

//개념 정리
//문자열 변환은 to_string() 함수를 사용
//정수 변환은 stoi() 함수를 사용
//long형 변환은 stol() 함수를 사용
//include<string> 헤더 파일 필요함
