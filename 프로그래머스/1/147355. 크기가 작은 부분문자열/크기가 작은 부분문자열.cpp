#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    long long num = stoll(p);
    int pSize = p.size();
    
    for(int i = 0 ; i <= t.size() - p.size(); i++)
    {
        string cut = t.substr(i, pSize);
        if(cut <= p)
        {
            answer++;
        }
    }
    
    
    
    
    return answer;
}