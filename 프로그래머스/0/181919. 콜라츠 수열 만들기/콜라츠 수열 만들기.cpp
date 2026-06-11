#include <string>
#include <vector>

using namespace std;

int jjack(int n)
{
    if(n % 2 == 0)
    {
        return n / 2;
    }
}
int hol(int n)
{
    if(n % 2 != 0)
    {
        return 3 * n + 1;
    }
}


vector<int> solution(int n) {
    vector<int> answer;
    int arr = 0;
    
    answer.push_back(n);
    while(n > 1)
    {
        if(n % 2 == 0)
        {
            n =  n / 2;
            answer.push_back(n);
        }
        else
        {
            n = 3 * n + 1;
            answer.push_back(n);
        }
    }
    
    return answer;
}