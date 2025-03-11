#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> results; // 결과를 저장할 벡터

    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        results.push_back(a + b); // 각 a와 b의 합을 벡터에 저장
    }

    for (int i = 0; i < t; i++) {
        cout << results[i] << '\n'; // 벡터에서 결과를 하나씩 출력
    }

    return 0;
}
