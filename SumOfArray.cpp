#include <iostream>
using namespace std;

int SumOfElements(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        cout << sum << " ";
    }
    cout << endl;
    return sum;
}

int main()
{
    int size;
    cout << "Size = ";
    cin >> size;

    int arr[100];
    cout << "Enter element: ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << SumOfElements(arr, size) << endl;
    return 0;
}