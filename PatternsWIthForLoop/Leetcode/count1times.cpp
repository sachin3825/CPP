#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, rem = 0, cnt = 0;
    cout << "Enter Integer Value : ";
    cin >> n;
    while (n != 0)
    {
        rem = n % 10;
        if (rem == 1)
        {
            cnt++;
        }
        n = n / 10;
    }
    cout << cnt;
    return 0;
}