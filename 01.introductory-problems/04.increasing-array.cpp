/**
 * Solution:
 * We keep track of the current most maximum and
 * an accumulation of the difference of current element and current most maximum
 * ; this is our answer
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> A(n);
    for (auto &a : A)
    {
        cin >> a;
    }

    int lastMax = 0;
    long long res = 0; // This is required as long long to pass
    for (auto a : A)
    {
        lastMax = max(a, lastMax);
        res += (lastMax - a);
    }
    cout << res << endl;

    return 0;
}