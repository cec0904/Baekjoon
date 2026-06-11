#include <string>
#include <vector>

using namespace std;

int TimeToSecond(string time)
    {
        int m1 = time[0] - '0';
        int m2 = time[1] - '0';
        int s1 = time[3] - '0';
        int s2 = time[4] - '0';
    
        int minute = m1 * 10 + m2;
        int second = s1 * 10 + s2;
        
        return minute * 60 + second;
    }

string SecondToTime(int Time)
{
    int m1 = (Time / 60) / 10;
    int m2 = (Time / 60) % 10;
    int s1 = (Time % 60) / 10;
    int s2 = (Time % 60) % 10;
    
    string M = to_string(m1) + to_string(m2);
    string S = to_string(s1) + to_string(s2);
    
    return M +":"+ S;
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    
    int VideoLen = TimeToSecond(video_len);
    int Pos = TimeToSecond(pos);
    int OpStart = TimeToSecond(op_start);
    int OpEnd = TimeToSecond(op_end);
    
    if(OpStart <= Pos && Pos <= OpEnd )
        {
            Pos = OpEnd;
        }
    
    
    for(int i = 0; i<commands.size(); i++)
    {
        
        
        
        if(commands[i] == "next")
        {
            Pos+=10;
            if(Pos > VideoLen)
            {
                Pos = VideoLen;
            }
        }
        
        else if (commands[i] == "prev")
        {
            Pos-=10;
            if(Pos < 0)
            {
                Pos = 0;
            }
        }
        
        if(OpStart <= Pos && Pos <= OpEnd )
        {
            Pos = OpEnd;
        }
    }
    
    
    
    
    return SecondToTime(Pos);
}