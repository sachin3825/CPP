#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while(j<=i){
            char ch = 'A' + i - 1;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;

    int a =1;
    while (a<=n)
    {
        int b =1;
        while(b<=a){
            char ch = 'A'+a+b-2;
            cout<<ch<<" ";
            b++;
        }
        cout<<endl;
        a++;
    }
    cout<<endl;
    
    int x = 1;
    while(x<=n){
       int y = 1;
       char ch = 'A' + n - x;
       while(y<=x){
           cout<<ch<<" ";
           ch++;
           y++;
       } 
       cout<<endl;
       x++;
    }
    return 0;
}