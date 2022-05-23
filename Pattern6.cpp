#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while (j<=n)
        {
            char ch = 'A' + i - 1; // ASCII table A = 65 (65 + 1 - 1 = 65(A))
            cout<<ch<<" "; // 65 + 2 - 1 = 66(B);
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}