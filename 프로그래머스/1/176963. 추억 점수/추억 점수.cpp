#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    map<string, int> num;
    
    for(int i = 0 ; i < yearning.size(); i++)
    {
        num[name[i]] = yearning[i];
    }
    
    for(int i = 0 ; i < photo.size(); i++)
    {
        int sum = 0 ;
        
        for(int j = 0 ; j < photo[i].size(); j++)
        {
            string person = photo[i][j];
            
            if(num.find(person) != num.end())
            {
                sum += num[person];
            }
        }
        
        answer.push_back(sum);
    }
    
    
    
    
    
    return answer;
}