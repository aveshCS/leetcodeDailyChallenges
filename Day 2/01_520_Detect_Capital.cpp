// 520. Detect Capital
//  https://leetcode.com/problems/detect-capital/

#include <iostream>
using namespace std;

bool detectCapitalUse(string word)
{
    int len = word.length();
    int countCapitol = 0;
    int j = 0;
    for (int i = 0; i < len; i++)
    {
        if (isupper(word[i]))
        {
            countCapitol++;
        }
    }
    if ((isupper(word[j]) && (countCapitol == 1)) || (!(isupper(word[j])) && countCapitol == 0) || (countCapitol == len))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string name = "FlaG";
    bool isCapitol = detectCapitalUse(name);
    if (isCapitol)
    {
        cout << "TRUE" << endl;
    }
    else
    {
        cout << "FALSE" << endl;
    }
    return 0;
}