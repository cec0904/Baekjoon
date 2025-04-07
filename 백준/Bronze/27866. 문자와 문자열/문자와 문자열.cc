#include <iostream>
using namespace std;

int main() {
	string S;
	int I;

	cin >> S >> I;

	/*for (int i = 0; i < S.length(); i++) {
		cout << S;
	}*/

	cout << S.substr(I -1, 1);

}