#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    transform(myString.begin(), myString.end(), myString.begin(), ::tolower);
    
    return myString;
}

//1. 방법1: answer에 변환 결과를 "뒤에 붙이기"
//
//string answer = "";
//transform(myString.begin(), myString.end(), back_inserter(answer), ::tolower);
//return answer;
//**back_inserter(answer)** 는 변환된 문자를 answer에 "하나씩 push_back" 해줌
//
//
//
//2. 방법2: answer 크기를 미리 myString만큼 확보
//
//string answer(myString.size(), ' '); // 미리 자릿수 확보(공백)
//transform(myString.begin(), myString.end(), answer.begin(), ::tolower);
//return answer;
//이렇게 하면 answer가 미리 충분한 공간을 갖고 있어서
//transform이 에러 없이 정상 동작함
//
//3. 방법3: myString을 바로 변환해서 return
//
//transform(myString.begin(), myString.end(), myString.begin(), ::tolower);
//return myString;
//myString 자체를 소문자로 바꿔서 return (가장 간단함)

