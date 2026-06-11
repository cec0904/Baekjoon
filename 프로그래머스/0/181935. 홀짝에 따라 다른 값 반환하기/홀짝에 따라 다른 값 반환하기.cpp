#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    if(n%2 == 1){
        for(int i =0; i<=n; i++){
            if(i%2 == 1){
                answer += i;
            }
        }
    }
    
    
    else{
        for(int j =0; j<=n; j++){
            if(j%2 == 0){
                answer += j*j;
            }
            
        }
    }
    
    
    return answer;
}