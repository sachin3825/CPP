// Complement of Base 10 Integer
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = n;
    int mask = 0;

    // edge case
    if (n == 0)
        return 1;
    while (a != 0)
    {
        mask = (mask << 1) | 1;
        a = a >> 1;
    }
    int ans = (~n) & mask;

    cout << ans;
    return 0;
}