#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    vector<int> answer;
    int sum = 0;
    
    for(int i = 0; i < absolutes.size(); i++)
    {
        if(signs[i] == 1)
        {
            answer.push_back(absolutes[i]);
        }
        else
        {
            answer.push_back(-absolutes[i]);
        }
        
        sum += answer[i];
    }
    
    
    
    return sum;
}