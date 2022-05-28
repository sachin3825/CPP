#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << "\n";
    int count = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            cout << count << " ";
            count++;
        }

        cout << endl;
    }
    cout << "\n";
    int start = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << start << " ";
            start++;
        }
        cout << endl;
    }
    int a;
    cout << a << endl;

    return 0;
}