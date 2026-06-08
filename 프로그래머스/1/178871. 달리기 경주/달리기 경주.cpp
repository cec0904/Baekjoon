#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    
    unordered_map<string, int> m;
    
    for(int i = 0 ; i < players.size(); i++)
    {
        m[players[i]] = i;
    }
    
    for(int i = 0 ; i < callings.size(); i++)
    {
        string name = callings[i];
        int cur = m[callings[i]];
        int prev = cur -1 ;
        
        string FrontName = players[prev];
        
        swap(players[cur], players[prev]);
        
        m[name] = prev;
        m[FrontName] = cur;
       
    }
   
    
    return players;
}