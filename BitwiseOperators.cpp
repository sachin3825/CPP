#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;
    // Bitwise Operators(AND, OR, NOR and XOR)
    cout << "a&b: " << (a & b) << endl;
    cout << "a|b: " << (a | b) << endl;
    cout << "~a: " << (~a) << endl;
    cout << "a^b: " << (a ^ b) << endl;

    // Right shift and left shift
    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;

    return 0;
}