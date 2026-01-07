#pragma warning(disable:4996)
#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;
int main() {
	time_t current_time = time(nullptr); //현지 시간 변수로 저장
	tm* current = gmtime(&current_time); //구조체 tm


	int year = current->tm_year + 1900;
	int month = current->tm_mon + 1;
	int day = current->tm_mday;
	//출력 형식 지정하는 setw, setfill
	cout << year << '-' << setw(2) << setfill('0') << month << '-' << setw(2) << setfill('0') << day;

}