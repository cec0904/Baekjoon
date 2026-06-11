#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    
    bool flag = true;
    
    for(int i = 0 ; i < s.size(); i++)
    {
        if(s[i] == ' ')
        {
            flag = true;
            answer += ' ';
        }
        else if(flag)
        {
            answer += toupper(s[i]);
            flag = false;
        }
        else
        {
            answer += tolower(s[i]);
        }
        
        
    }
    
    
    return answer;
}