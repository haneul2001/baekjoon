#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	int result = (a * a + b * b + c * c + d * d + e * e)%10;
	cout << result;
}