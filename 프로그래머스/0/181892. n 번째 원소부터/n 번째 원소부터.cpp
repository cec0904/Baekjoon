#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    
    
        answer.insert(answer.begin(), num_list.begin() + n-1, num_list.end());
    
    return answer;
}