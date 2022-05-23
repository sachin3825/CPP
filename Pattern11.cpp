#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 1;
    cin>>n;
    while (i<=n)
    {
        int j = 1;
        int space = n - i;
        while (space)
        {
            cout<<" ";
            space--;
        }
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    cout<<endl;
    int a = 1;
    while (a<=n)
    {
        int b = 1;
        int space = a - 1;
        while (space)
        {
            cout<<" ";
            space--;
        }
        while(b<=n-a+1){
            cout<<a;
            b++;
        }
        cout<<endl;
        a++;
        
    }
    cout<<endl;
   
    int x = 1;
    while (x<=n)
    {
        int y = 1;
        int space = x - 1;
        while (space)
        {
            cout<<" ";
            space--;
        }
        while(y<=n-x+1){
            cout<<x+y-1;
            y++;
        }
        cout<<endl;
        x++;
        
    }
    
    return 0;
}