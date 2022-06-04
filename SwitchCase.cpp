#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int operation;

    do
    {
        cout << "Chose operation to perform" << endl;
        cout << "1.add" << endl;
        cout << "2.sub" << endl;
        cout << "3.div" << endl;
        cout << "4.multi" << endl;
        cout << "5.quit" << endl;
        cin >> operation;
        switch (operation)
        {
        case 1:
            cout << a << " + " << b << " = " << a + b << endl;
            break;
        case 2:
            cout << a << " - " << b << " = " << a - b << endl;
            break;
        case 3:
            cout << a << " / " << b << " = " << a / b << endl;
            break;
        case 4:
            cout << a << " * " << b << " = " << a * b << endl;
            break;
        case 5:
            cout << "Quit" << endl;
            break;

        default:
            cout << "Wrong selection" << endl;
            break;
        }
    } while (operation != 5);

    return 0;
}