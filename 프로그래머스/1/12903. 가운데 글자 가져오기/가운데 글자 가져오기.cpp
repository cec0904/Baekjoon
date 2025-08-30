#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int half = s.size()/2;
    
    if(s.size() % 2 != 0)
    {
        answer += s.substr(half, 1);
    }
    else
    {
        answer += s.substr(half - 1, 2);
    }
    
    
    return answer;
}