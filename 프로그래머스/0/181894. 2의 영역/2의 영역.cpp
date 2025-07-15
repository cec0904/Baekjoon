#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    int first = -1;
    int last = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 2) {
            if (first == -1) 
                first = i; 
            
            last = i;
        }
    }

    if (first != -1 && last != -1) {
        answer.insert(answer.end(), arr.begin() + first, arr.begin() + last + 1);
    }
    else
    {
        answer.push_back(-1);
    }

    return answer;
}
