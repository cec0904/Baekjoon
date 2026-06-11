#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    // 내림차순으로 정렬
    // m개씩 끊어서 넣기
    // m개씩 채워지지 않으면 버림
    sort(score.begin(), score.end(), greater<int>());
    
    for(int i = m-1 ; i < score.size(); i+=m)
    {
       answer += score[i] * m;
    }
    
    
    return answer;
}