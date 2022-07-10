#include <iostream>
using namespace std;
int main()
{
    int A[3] = {1,2,3};
    int B[3] = {1,2,3};
    int c = A[3];
    int distance ;
    for(int i = 0; i < 3; i++)
    {
        distance = distance*(A[3]-A[i]);
        cout<<distance<<" ";
    }
    
    return 0;
}