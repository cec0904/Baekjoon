#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;

	while (true) {
		getline(cin, str);
		if (str == "")break;

		cout << str << '\n';
	}
	return 0;
}