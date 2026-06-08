#include <string>
#include <vector>
using namespace std;

int solution(string s) {
    int answer = 0;
    string temp = "";
    vector<string> words = {
        "zero","one","two","three","four",
        "five","six","seven","eight","nine"
    };

    for (char c : s) {
        if (isdigit(c)) {
            
            answer = answer * 10 + (c - '0');
        } else {
            
            temp += c;

            
            for (int i = 0; i < 10; i++) {
                if (temp == words[i]) {
                    answer = answer * 10 + i;
                    temp = "";
                    break;
                }
            }
        }
    }
    return answer;
}
