#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    int n = num_list.back();
    //int n = num_list.size() - 1;
    //int m = num_list.size() - 2;
    int m = num_list[num_list.size() - 2];
    
    if(n > m)
    {
        num_list.push_back(n-m);
    }
    else
    {
        num_list.push_back(n * 2);
    }
    
    for (int i = 0; i < num_list.size(); i++)
    {
        answer.push_back(num_list[i]);
    }
    
    return answer;
}