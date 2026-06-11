#include <vector>
using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    for (int n : num_list) {
        //n이 1이 될 때까지 반복
        while (n != 1) {
            if (n % 2 == 0) n /= 2;
            else n = (n - 1) / 2;
            answer++;
        }
    }
    return answer;
}
