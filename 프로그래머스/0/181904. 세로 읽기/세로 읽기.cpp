#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";

    for (int i = 0; i < my_string.size(); i += m) {
    string block = my_string.substr(i, m);
    answer += block[c-1];  
}


    return answer;
}
