#include <iostream>
using namespace std;

int fibonacci(int n)
{
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 1; i <= n; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber << " ";
        a = b;
        b = nextNumber;
    }
    return a, b;
}

int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}