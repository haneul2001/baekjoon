#include<iostream>
using namespace std;

int RoomNumber(int H, int W, int N) {
	
}

int main() {
	int T, H, W, N;
	//T는 테스트 케이스, H는 호텔 층, W는 각 층의 방, N은 손님 순서

	cin >> T;
	

	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;
		cout << RoomNumber(H, W, N) << endl;
	}


}