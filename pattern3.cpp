#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cin>>n;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    } 
    cout<<endl;

    // Reverse pattern
    int a = 1;
    while(a<=n){
        int b = 1;
        while(b<=n){
            cout<<n-b+1<<" ";
            b++;
        }
        cout<<endl;
        a++;
    }
    cout<<endl;

    // number count
    int x = 1;
    int count = 1;
    while(x<=n){
        int y = 1;
        while(y<=n){
            cout<<count<<" ";
            count++;
            y++;
        }
        cout<<endl;
        x++;

    }
    return 0;
}