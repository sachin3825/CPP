#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            // cout << false;
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num;
    cin >> num;
    if (isPrime(num))
    {
        cout << "Is a Prime Number" << endl;
    }
    else
    {
        cout << "Not a prime Number" << endl;
    }

    return 0;
}