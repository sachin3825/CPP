// Not using break statement
#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "Enter the amount" << endl;
    cin >> amount;
    int hundred = 0, twenty = 0, one = 0, fifty = 0;

    switch (1)
    {
    case 1:
        hundred = amount / 100;
        cout << "Hundred " << hundred << endl;
        amount = amount % 100;

    case 2:
        fifty = amount / 50;
        cout << "fifty " << fifty << endl;
        amount = amount % 50;

    case 3:
        twenty = amount / 20;
        cout << "twenty " << twenty << endl;
        amount = amount % 20;

    case 4:
        one = amount / 1;
        cout << "one " << one << endl;
        amount = amount % 1;
    }

    return 0;
}