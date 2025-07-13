#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    
    
    int a = intervals[0][0];
    int b = intervals[0][1];
    int c = intervals[1][0];
    int d = intervals[1][1];
    
    for(int i = a; i <= b; i++)
    {
        answer.push_back(arr[i]);
    }
    for(int j = c; j <= d; j++)
    {
        answer.push_back(arr[j]);
    }
    
    
    
    
    
    
    return answer;
}