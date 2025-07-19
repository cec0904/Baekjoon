#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

vector<int> solution(int start_num, int end_num) {
    vector<int> answer(start_num - end_num + 1);
    
    iota(answer.begin(), answer.end(), end_num);
    
    sort(answer.rbegin(), answer.rend());
    
    
    
    return answer;
}