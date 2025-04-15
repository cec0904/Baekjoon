#include <iostream>
using namespace std;

int math(int a, int b, int c, int d, int e) {
	return (a * a) + (b * b) + (c * c) + (d * d) + (e * e);
}

int main() {
	int a, b, c, d, e;

	cin >> a >> b >> c >> d >> e;

	int result = math(a, b, c, d, e);

	cout << result % 10;
}