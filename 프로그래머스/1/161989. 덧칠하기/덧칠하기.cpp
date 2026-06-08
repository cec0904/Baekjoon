#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    
    // 모든 경우의 수를 할 수 없음
    // m 의 크기가 관건
    
    // 1. (첫번째 인덱스와 마지막인덱스의 차) 가 같거나 큰 경우
    // 2. 작은 경우 -> 1
    
    
    
    // 아니면 n 을 다 돌려서 section 에 해당하는 것들 찾기
    // +1 한 인덱스 가 m 에 다 들어가는지
    int count = 0;
    for(int i = 0 ; i < section.size(); i++)
    {
        if(section[i] > count)
        {
            answer++;
            count = section[i] + m - 1;
        }
    }
    
    return answer;
}