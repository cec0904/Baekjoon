#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int a = 0;
    
    for(int i = 0 ; i < seoul.size(); i++)
    {
        if(seoul[i] == "Kim")
        {
            a = i;
            break;
        }
    }
    
    answer = "김서방은 " + to_string(a) + "에 있다";
    return answer;
}