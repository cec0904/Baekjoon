#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string a_str = "";
    string b_str = "";
    
    for(int i =0; i< num_list.size(); i++){
        if(num_list[i] % 2 == 1){
            a_str += to_string(num_list[i]);
        }
        else{
            b_str += to_string(num_list[i]);
        }
    }
    
    int a = stoi(a_str);
    int b = stoi(b_str);
    
    answer = a+b;
    
    return answer;
}