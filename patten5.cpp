#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<i + j - 1<<" ";
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
            cout<<a-b+1<<" ";
            b++;
        }
        cout<<endl;
        a++;
    }
    return 0;
}