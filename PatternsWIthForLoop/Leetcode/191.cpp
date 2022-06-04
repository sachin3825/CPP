#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
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
    cout << count;
    // cout << count;
    return 0;
}