#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int gcd = __gcd(n, m);           
    int lcm = (long long)n * m / gcd; 
    
    answer.push_back(gcd);
    answer.push_back(lcm);
    
    return answer;
}
