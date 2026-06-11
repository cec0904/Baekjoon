#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = "";
    
    for(int i = 0; i < queries.size(); i++)
    {
        int n = queries[i][0];
        int m = queries[i][1];
        
        reverse(my_string.begin()+n, my_string.begin()+m+1);
        answer = my_string;
    }
    
    
    return answer;
}