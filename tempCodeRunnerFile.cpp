#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "Enter the amount" << endl;
    cin >> amount;
    int hundred = 0, twenty = 0, one = 0;
    int case = 1;
    while (case >= 3){
    switch (case)
    {
    case 1:
        hundred = amount / 100;
        cout << "Hundred " << hundred << endl;
        amount = amount % 100;
        break;
    case 2:
        twenty = amount / 200;
        cout << "twenty " << twenty << endl;
        amount = amount % 20;
        break;
    case 3:
        one = amount / 1;
        cout << "one " << one << endl;
        amount = amount % 1;
        break;

    default:
        break;

    }
    case++;
    }

   

    return 0;
}