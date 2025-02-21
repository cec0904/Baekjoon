#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;

	if (1 <= a && a <= 4000) {
		if ((a % 4 == 0 && a % 100 != 0) || (a % 4 ==0 && a % 400 == 0)) 
		{
			cout << "1";
		}
		else {
			cout << "0";
		}
	}
}