#include <iostream>
using namespace std;

bool uniqueOccurrences(int arr[], int size)
{
    int count = 0;
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        // cout << "Enter";
        for (int j = 1; j < size; j++)
        {
            // cout << "Enter";

            if (arr[i] = arr[j])
            {
                count++;
            }
            ans = count;
        }
        if (ans == count)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int arr[6] = {1, 2, 2, 1, 3, 3};
    int found = uniqueOccurrences(arr, 6);
    if (found)
    {
        cout << "Yes";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}