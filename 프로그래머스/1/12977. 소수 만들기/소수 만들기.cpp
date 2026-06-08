#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;

    
    
    for(int i = 0 ; i < nums.size(); i++)
    {
        for(int j = i+1 ; j < nums.size(); j++)
        {
            for(int k = j+1; k < nums.size(); k++)
            {
                int a = nums[i] + nums[j] + nums[k];
                
                bool c = true;
                
                for(int b = 2 ; b < a; b++)
                {
                    // 1과 자기자신으로 나눴을 때
                    // 1과 자기자신이 아닌 수로 나눴을 때 나머지가 있으면 소수
                    if(a%b == 0)
                    {
                        c = false;
                        break;
                    }
                }
                
                if(c)
                {
                    answer++;
                }
            }
        }
    }
    
    

    return answer;
}