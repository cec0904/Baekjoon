#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);  // C와의 입출력 동기화 해제
	cin.tie(NULL);  // cin과 cout의 묶음을 해제하여 성능 향상

	int t, a, b;
	cin >> t;
	


	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		cout << a + b << '\n';
	}
	return 0;
}