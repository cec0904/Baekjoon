#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    int count = 0;

    for(int i = 0 ; i < board.size(); i++)
    {
        for(int j = 0; j < board[i].size(); j++)
        {
            if(i == h-1 && j == w && board[i][j] == board[h][w])
            {
                count++;
            }

            else if(i == h+1 && j == w&& board[i][j] == board[h][w])
            {
                count++;
            }
            
            // 왼쪽 확인
            else if(i == h && j == w-1&& board[i][j] == board[h][w])
            {
                count++;
            }
            // 오른쪽 확인
            else if(i == h && j == w+1&& board[i][j] == board[h][w])
            {
                count++;
            }
            
            
        }
        
    }
    
    answer = count;
    return answer;
}