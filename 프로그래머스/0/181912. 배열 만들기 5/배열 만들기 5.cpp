#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    
    for(int i = 0; i < intStrs.size(); i++)
    {
        int num = stoi(intStrs[i].substr(s, l));
        answer.push_back(num);
    }
    
    auto a = remove_if(answer.begin(), answer.end(), [k](int num){return num <= k;});
    answer.erase(a, answer.end()); 
    
    return answer;
}
