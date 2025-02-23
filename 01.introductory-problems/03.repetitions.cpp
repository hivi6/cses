/**
 * Solution:
 * Here we just take a repeat variable default to 1
 * If a character is same as the last character we increase the count
 * If not then we restart it to 1
 * We keep track of the maximum repeat value; this is our answer
*/
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int res = 1, repeat = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i - 1] == s[i])
            repeat++;
        else
            repeat = 1;
        res = max(res, repeat);
    }

    cout << res << endl;

    return 0;
}