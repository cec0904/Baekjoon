#include <iostream>
using namespace std;



int math(int a, int b) {
	return (a + b) * (a - b);
}


int main() {
	
	int a, b;


	cin >> a;
	cin >> b;

	int result = math(a, b);
	cout << result;
	


}