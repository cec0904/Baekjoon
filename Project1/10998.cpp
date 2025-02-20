#include <iostream>
using namespace std;

int main() {
	int A;
	int B;

	cin >> A;
	cin >> B;

	if (A <= 0 || A >= 10 || B <= 0 || B >= 10)
		return 0;

	cout << A * B;
}