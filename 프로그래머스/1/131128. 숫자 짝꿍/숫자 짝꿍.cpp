#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    //unordered_map<int, string> x;
    //unordered_map<int, string> y;

    //for (int i = 0; i < X.size(); ++i)
    //{
    //    x[i] = X[i];
    //}
    //for (int i = 0; i < Y.size(); ++i)
    //{
    //    y[i] = Y[i];
    //}

    //string result = "";

    //for (int i = 0; i < X.size(); ++i)
    //{
    //    for (int j = 0; j < Y.size(); ++j)
    //    {
    //        if (X[i] == Y[j])
    //        {
    //            result += X[i];
    //            Y.erase(j, 1);
    //        }
    //    }
    //}

    //sort(result.begin(), result.end(), greater<int>());
    //if (result.empty())
    //{
    //    result = "-1";
    //}
    //for (int i = 0; i < result.size(); i++)
    //{
    //    if (result[0] == '0' && result[i] == result[i + 1])
    //    {
    //        result.erase(i, 1);
    //    }
    //}

    vector<int> x(10, 0);
    vector<int> y(10, 0);
    
    string result = "";
    
    for(int i = 0 ; i < X.size(); ++i)
    {
        if(X[i] == '0')
        {
            ++x[0];
        }
        else if(X[i] == '1')
        {
            ++x[1];
        }
        else if(X[i] == '2')
        {
            ++x[2];
        }
        else if(X[i] == '3')
        {
            ++x[3];
        }
        else if(X[i] == '4')
        {
            ++x[4];
        }
        else if(X[i] == '5')
        {
            ++x[5];
        }
        else if(X[i] == '6')
        {
            ++x[6];
        }
        else if(X[i] == '7')
        {
            ++x[7];
        }
        else if(X[i] == '8')
        {
            ++x[8];
        }
        else if(X[i] == '9')
        {
            ++x[9];
        }
    }
    for(int i = 0 ; i < Y.size(); ++i)
    {
        if(Y[i] == '0')
        {
            ++y[0];
        }
        else if(Y[i] == '1')
        {
            ++y[1];
        }
        else if(Y[i] == '2')
        {
            ++y[2];
        }
        else if(Y[i] == '3')
        {
            ++y[3];
        }
        else if(Y[i] == '4')
        {
            ++y[4];
        }
        else if(Y[i] == '5')
        {
            ++y[5];
        }
        else if(Y[i] == '6')
        {
            ++y[6];
        }
        else if(Y[i] == '7')
        {
            ++y[7];
        }
        else if(Y[i] == '8')
        {
            ++y[8];
        }
        else if(Y[i] == '9')
        {
            ++y[9];
        }
    }
    
    for(int i = 0 ; i < 10; ++i)
    {
        int count = 0 ;
        if(x[i] < y[i])
        {
            count += x[i];
        }
        else
        {
            count += y[i];
        }
        for(int j = 0 ; j < count; ++j)
        {
            result += char(i + '0');
        }
    }
    
    sort(result.begin(), result.end(), greater<int>());
    
    if(result.empty())
    {
        return "-1";
    }
    
    if(result[0] == '0')
    {
        return "0";
    }
    
    return result;
}