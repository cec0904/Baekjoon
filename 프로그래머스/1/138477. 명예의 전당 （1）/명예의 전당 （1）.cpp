#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> v;
    
    for(int i = 0; i < score.size(); i++)
    {
        
        v.push_back(score[i]);
        sort(v.begin(), v.end(), greater<int>());
        
        if(i+1 < k)
        {
            answer.push_back(v.back());
        }
        else if(i+1 >= k)
        {
            answer.push_back(v[k-1]);
        }
    }
    
    
    return answer;
}