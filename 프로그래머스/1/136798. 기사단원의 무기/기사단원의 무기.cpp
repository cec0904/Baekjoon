#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    
    vector<int> divisor;

    for(int i = 1 ; i <= number; i++)
    {
        int a = 0;
        for(int j = 1; j <=i; j++)
        {
            // 나머지가 0 이라면 약수임
            // a 증가 및 푸쉬백

            if(i % j == 0)
            {
                a++;

            }
        }
        divisor.push_back(a);
    }
    
    int sum = 0;
    
    for(int i = 0 ; i < divisor.size(); i++)
    {
        if(divisor[i] > limit)
        {
            divisor[i] = power;
        }

        sum += divisor[i];
    }
    answer = sum;
    
    return answer;
}