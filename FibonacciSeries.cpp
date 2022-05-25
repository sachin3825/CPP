#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // Fabonaaci Series
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
    cout << endl;

    // Prime Number with for loop
    cout << "Prime number" << endl;
    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "not prime" << endl;
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << "not a Prime" << endl;
    }
    else
    {
        cout << "prime" << endl;
    }

    return 0;
}