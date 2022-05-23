#include <iostream>
using namespace std;

int main()
{
    int n; 
    int i = 1;
    cin>>n;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;

    int a = 1;
    while(a<=n){
        int b = 1;
        while(b<=a){
            cout<<a<<" ";
            b++;
        }
        cout<<endl;
        a++;
    }
    cout<<endl;

    int x = 1;
    int count = 1;
    while(x<=n){
        int y = 1;
        while(y<=x){
            cout<<count<<" ";
            count++;
            y++;
        }
        cout<<endl;
        x++;
    }
    return 0;
}