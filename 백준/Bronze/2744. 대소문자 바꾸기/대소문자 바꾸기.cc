#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32; // 대문자 → 소문자
        }
        else if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32; // 소문자 → 대문자
        }
    }

    cout << s;

    return 0;
}
