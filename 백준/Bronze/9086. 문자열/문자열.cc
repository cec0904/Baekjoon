#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int i;

	cin >> i;
	

	for (int j = 0; j < i; j++) {
		cin >> str;

		cout << str.front() << str.back() << endl;
	}


}
