#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    for(int i = 1 ; i < food.size(); i++)
    {
        int a = food[i] / 2;
        if(a < 1)
        {
            continue;
        }
        for(int j = 1; j <= a; j++)
        {
            answer.push_back(i + '0');
        }
    }
    answer.push_back('0');
    string ReverseAnswer = answer;
    reverse(ReverseAnswer.begin(), ReverseAnswer.end());
    answer.pop_back();
    answer.append(ReverseAnswer);
   
    
    
    return answer;
}