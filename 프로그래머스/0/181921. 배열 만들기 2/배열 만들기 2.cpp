#include <string>
#include <vector>
using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;

    for (int i = l; i <= r; i++) {
        string s = to_string(i);
        int j;
        for (j = 0; j < s.size(); j++) {
            if (s[j] != '0' && s[j] != '5') {
                break;  
            }
        }

        if (j == s.size()) {
            answer.push_back(i); 
        }
    }

    if (answer.empty()) {
        answer.push_back(-1);
    }

    return answer;
}
