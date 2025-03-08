#include <iostream>
using namespace std;

int main()
{
    long long t, y, x;
    cin >> t;

    while (t--) {
        cin >> y >> x;

        if (y >= x) {
            if (y % 2 == 0) {
                cout << y * y - x + 1;
            } else {
                y--;
                cout << y * y + x;
            }
        } else {
            if (x % 2 == 1) {
                cout << x * x - y + 1;
            } else {
                x--;
                cout << x * x + y;
            }
        }
        cout << endl;
    }

    return 0;
}