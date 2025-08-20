#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    vector<int> w;
    vector<int> h;
    
    for(int i = 0 ; i < sizes.size(); i++)
    {
        if(sizes[i][0] > sizes[i][1])
        {
            w.push_back(sizes[i][0]);
            h.push_back(sizes[i][1]);
        }
        else
        {
            w.push_back(sizes[i][1]);
            h.push_back(sizes[i][0]);
        }
    }
    
    sort(w.begin(), w.end(), greater<int>());
    sort(h.begin(), h.end(), greater<int>());
    
    answer = w[0] * h[0];
    
    
    
    return answer;
}