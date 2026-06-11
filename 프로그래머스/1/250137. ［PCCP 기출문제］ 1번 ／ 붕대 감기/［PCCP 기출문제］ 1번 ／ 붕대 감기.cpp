#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    
    int skilltime = bandage[0];
    int healpersecond = bandage[1];
    int extraheal = bandage[2];
    
    int healcount = 0;
    int attackindex = 0;
    int maxhealth = health;
    
    int time = attacks[attacks.size()-1][0];
    
    for(int i = 1; i <= time; i++)
    {
        // 공격이 있을 때
        if(attackindex < attacks.size() && i == attacks[attackindex][0])
        {
            health -= attacks[attackindex][1];
            healcount = 0;
            attackindex++;
            if(health <= 0 )
            {
                return -1;
            }
        }
            
        // 공격이 없을 때
        else
        {
            healcount++;
            health += healpersecond;
            if(skilltime == healcount)
            {
                health += extraheal;
                healcount = 0;
            }
            if(maxhealth < health)
            {
                health = maxhealth;
            }
        }
    }

    return health;
}