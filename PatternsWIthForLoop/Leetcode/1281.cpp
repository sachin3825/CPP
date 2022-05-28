/*
Subtract the Product and Sum of Digits of an Integer
Input: n = 234
Output: 15
Explanation:
Product of digits = 2 * 3 * 4 = 24
Sum of digits = 2 + 3 + 4 = 9
Result = 24 - 9 = 15
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int digit = 0;
    int product = 1;
    int sum = 0;
    while (n != 0)
    {
        digit = n % 10;
        product = product * digit;
        sum = digit + sum;
        n = n / 10;
    }
    int result = product - sum;
    cout << result;

    return 0;
}