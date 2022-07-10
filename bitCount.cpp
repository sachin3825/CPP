#include <iostream>
using namespace std;

int bitCount(int n)
{
    int count = 0;
    while (n != 0)
    {
        // checking last bit
        if (n & 1)
        // Using AND opreator to check the last bit
        {
            count++;
        }
        n = n >> 1; // right shift
    }
    return count;
}
int main()
{
    int a, b;
    cin >> a >> b;
    a = bitCount(a);
    b = bitCount(b);
    cout << a + b << endl;

    return 0;
}