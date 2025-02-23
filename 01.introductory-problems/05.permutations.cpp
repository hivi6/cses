/**
 * Solution:
 * One of the way to create the sequence is to create the even elements
 * from 2 to n first(this will make sure the difference is 2), and then create
 * the odd elements from 1 to n(this will also make sure that the diff is 2).
 * But it is in this portion of even to odd that we have to make sure the diff
 * is greater than 2. And by placing it the following way the difference in this
 * portion is ((n - n % 2) - 1). Now for values like n == 2 and n == 3, the
 * difference is 1. So for n == 2 and n == 3 there are no sequence.
 */
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if ((n - n % 2 - 1) == 1) // could have been hardcoded for n == 2 and n == 3
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        for (int i = 2; i <= n; i += 2)
            cout << i << " ";
        for (int i = 1; i <= n; i += 2)
            cout << i << " ";
    }

    return 0;
}