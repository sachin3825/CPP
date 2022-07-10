#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void swapping(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int arr1[9] = {21, 3, 4, 6, -12, 44, 34, 37, 73};
    swapping(arr, 5);
    print(arr, 5);
    cout << endl;
    swapping(arr1, 9);
    print(arr1, 9);

    return 0;
}