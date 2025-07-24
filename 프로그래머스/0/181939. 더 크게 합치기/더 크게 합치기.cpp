#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string ab = to_string(a) + to_string(b);
    string ba = to_string(b) + to_string(a);
    
    if(ab > ba){
        answer +=  stoi (ab);
    }
    else if(ab < ba){
        answer += stoi (ba);
    }
    else{
        answer += stoi (ab);
    }
    
    
    
    return answer;
}