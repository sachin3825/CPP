#include <iostream>
using namespace std;
void Reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size, end;
    cin >> size;
    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int j = size - 1; j <= 0; j--)
    {
        cout << arr[j];
    }
    Reverse(arr, size);
    print(arr, size);
    return 0;
}