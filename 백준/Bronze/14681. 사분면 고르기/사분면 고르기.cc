#include <iostream>
using namespace std;

int main() {
	int x;
	int y;

	cin >> x;
	cin >> y;
	
	if (0 < x && x <= 1000 && 0 < y && y <= 1000) {
		cout << "1";
	}
	else if (x < 0 && 0 < y && y <= 1000) {
		cout << "2";
	}
	else if (y < 0 && 0 < x && x <= 1000) {
		cout << "4";
	}
	else {
		cout << "3";
	}
	

}