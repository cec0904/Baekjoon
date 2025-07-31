#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    
    answer.insert(answer.begin(), phone_number.end()-4, phone_number.end());
    answer.insert(answer.begin(), phone_number.size()-4, '*');
    
    return answer;
}