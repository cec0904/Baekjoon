#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    
    for(int i = 0; i < my_string.size(); i++){
        string suffix = my_string.substr(i);
        if(suffix == is_suffix)
        {
            answer =  1;
            break;
        }
        
    }
    
    
    return answer;
        
}