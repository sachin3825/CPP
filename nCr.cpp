#include <iostream>
using namespace std;

int Factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << fact << endl;
    return fact;
}
int nCr(int n, int r)
{
    int num = Factorial(n);
    int denom = Factorial(r) * Factorial(n - r);
    return num / denom;
}

int main()
{
    int n, r;
    cin >> n >> r;

    cout << "nCr: " << nCr(n, r);
    return 0;
}