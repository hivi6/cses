/**
 * Solution 1:
 * Add the numbers to a set, and iterate from 1 to n to check which number
 * doesn't exists
 * 
 * Solution 2:
 * Add the sum from 1 to n. Now subtract the input elements. What remaining
 * will be the missing number
 * Total sum from 1 to n is an arithmetic sum which is (n * (n + 1) / 2)
*/
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    vector<int> A(n - 1);
    for (auto &a : A)
        cin >> a;

    int res = n * (n + 1) / 2 - accumulate(A.begin(), A.end(), 0);
    cout << res << endl;

    return 0;
}