// Reverse of an integer
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0, i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if ((n > INT64_MAX / 10) || (n < INT64_MIN))
        {
            return 0;
        }
        ans = (ans * 10) + digit;
        n = n / 10;
        i++;
    }
    cout << ans << endl;

    return 0;
}