#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    int sum{0};

    for (int i = 1; i <= n; i++)
    {
        sum += i;
        cout << sum << endl;
    }
    cout << sum;
    return 0;
}