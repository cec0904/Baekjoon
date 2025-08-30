#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    
    
    
    
    for(int n = 0; n<parts.size(); n++)
    {
        int i = parts[n][0];
        int j = parts[n][1];
        
        answer += my_strings[n].substr(i, j - i + 1);
    }
    
    
    return answer;
}