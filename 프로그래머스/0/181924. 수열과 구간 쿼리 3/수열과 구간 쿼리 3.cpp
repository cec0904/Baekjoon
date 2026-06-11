#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;

    for(int n = 0; n < queries.size(); n++) {
        int i = queries[n][0];
        int j = queries[n][1];

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }


    answer = arr;
    return answer;
}
