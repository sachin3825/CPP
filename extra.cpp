#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "Enter the amount" << endl;
    cin >> amount;
    int hundred = 0, twenty = 0, one = 0, fifty = 0;
    int i = 1;
    while (i <= 3)
    {
        switch (i)
        {
        case 1:
            hundred = amount / 100;
            cout << "Hundred " << hundred << endl;
            amount = amount % 100;
            break;
        case 2:
            twenty = amount / 20;
            cout << "twenty " << twenty << endl;
            amount = amount % 20;
            break;
        case 3:
            fifty = amount / 50;
            cout << "twenty " << twenty << endl;
            amount = amount % 50;
            break;
        case 4:
            one = amount / 1;
            cout << "one " << one << endl;
            amount = amount % 1;
            break;

        default:
            break;
        }
        i++;
    }

    return 0;
}