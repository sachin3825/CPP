#include <iostream>
using namespace std;

void MaxAndMin(int arr[], int size)
{
    int maximum = INT32_MIN;
    int minimum = INT32_MAX;
    for (int i = 0; i < size; i++)
    {

        maximum = max(maximum, arr[i]);
        minimum = min(minimum, arr[i]);
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        //     // cout << max;
        // }
        // else if (arr[i] < min)n
        // {
        //     min = arr[i];
        // }
    }
    cout << "Maxium number in array is " << maximum << endl;
    cout << "Minimum number in array is " << minimum << endl;
}

int main()
{
    // int n = 10;
    int size;
    cout << "Size = ";
    cin >> size;

    int arr[100];
    cout << "Enter element: ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // cout << arr[size] << " " << endl;

    MaxAndMin(arr, size);
    return 0;
}