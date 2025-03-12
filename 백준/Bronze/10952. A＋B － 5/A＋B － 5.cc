#include <iostream>

using namespace std;

int main() {
    int A, B;

    while (true) {
        cin >> A >> B;
        if (A == 0 && B == 0) break; // 0 0이 입력되면 종료
        cout << (A + B) << '\n';
    }

    return 0;
}
