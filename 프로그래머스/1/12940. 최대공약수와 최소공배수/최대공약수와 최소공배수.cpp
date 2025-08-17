#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int a = n, b = m;

    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    
    int gcd = a;
    int lcm = (long long)n * m / gcd;
    
    answer.push_back(gcd);
    answer.push_back(lcm);
    
    return answer;
}
