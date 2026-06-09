#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    map<int, int> m;
    // 0,2 
    // 1,1
    // 2,1
    vector<int> st;

    for(int i = 0; i < ingredient.size(); i++)
    {
        st.push_back(ingredient[i]);
        int size = st.size();
        if(size >= 4 && st[size - 4] == 1 && st[size - 3] == 2 && st[size - 2] == 3 && st[size - 1] == 1)
        {
            answer++;

            st.pop_back();
            st.pop_back();
            st.pop_back();
            st.pop_back();
        }

    }
    
    

    
    return answer;
}