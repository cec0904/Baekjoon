#include <iostream>
using namespace std;

int main() {
    bool submitted[31] = { false }; // 출석번호는 1~30이므로 0은 사용 안 함.

    // 28명의 제출자 입력
    for (int i = 0; i < 28; i++) {
        int num;
        cin >> num;
        submitted[num] = true; // 제출한 학생 체크
    }

    // 제출하지 않은 학생 찾기
    for (int i = 1; i <= 30; i++) {
        if (!submitted[i]) { // false인 번호 출력
            cout << i << endl;
        }
    }

    return 0;
}
