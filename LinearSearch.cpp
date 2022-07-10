#include <iostream>
using namespace std;

bool Search(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (element == arr[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int size;
    cout << "Size = ";
    cin >> size;

    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the element you want to search: " << endl;
    cin >> key;

    int found = Search(arr, size, key);
    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}