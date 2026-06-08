#include <string>  
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for (int i = 0; i < queries.size(); i++) {
        int s = queries[i][0];
        int e = queries[i][1];
        int k = queries[i][2];
        
        int min_value = 2147483647;
        
        for (int j = s; j <= e; j++) {
            if (arr[j] > k && arr[j] < min_value) {
                min_value = arr[j];
            }
        }
        
        if (min_value == 2147483647) {
            answer.push_back(-1);
        } else {
            answer.push_back(min_value);
        }
    }
    
    return answer;
}
