#include <iostream>
using namespace std;

int AP(int n)
{
    int Ap = (3 * n) + 7;
    return Ap;
}
int main()
{
    int n;
    cin >> n;
    cout << AP(n) << endl;
    return 0;
}