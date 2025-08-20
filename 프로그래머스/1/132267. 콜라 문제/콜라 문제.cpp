#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while(n >= a)
    {
        int c = n - (n % a);
        int d = (c/a) * b;
        n = (n % a) + d;

        answer += d;
    }
    
    return answer;
}