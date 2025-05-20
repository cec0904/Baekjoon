#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // 대문자 → 소문자
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32; // 소문자 → 대문자
        }
    }

    cout << str;

    return 0;
}