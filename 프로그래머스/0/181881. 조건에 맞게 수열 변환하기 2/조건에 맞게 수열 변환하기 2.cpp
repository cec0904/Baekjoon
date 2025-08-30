#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int result = 0;
    while (true) { 
        vector<int> answer;
        bool changed = false; 

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] >= 50 && arr[i] % 2 == 0) {
                answer.push_back(arr[i] / 2);
            } else if (arr[i] < 50 && arr[i] % 2 != 0) {
                answer.push_back(arr[i] * 2 + 1); 
            } else {
                answer.push_back(arr[i]);
            }
            if (answer.back() != arr[i]) changed = true; 
        }

        if (!changed) break; 
        arr = answer; 
        result++;     
    }
    return result;
}
