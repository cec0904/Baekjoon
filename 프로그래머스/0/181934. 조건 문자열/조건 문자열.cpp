#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    int answer = 0;
    
    if(n <= m && ineq == "<" && eq == "="){
        return 1;
    }
    else if(n >= m && ineq == ">" && eq == "="){
        return 1;
    }
    else if(n > m && ineq == ">" && eq == "!"){
        return 1;
    }
    else if(n < m && ineq == "<" && eq == "!"){
        return 1;
    }
    else{
        return 0;
    }
    

    
    
    
    return answer;
}