#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    int i = 1;
    while (i<=n)
    {
        int j = 1;
        int space = n - i;
        // Print space(1st  triangle)
        while(space){
            cout<<" ";
            space--;
        }

        // print 2nd triangle
        while(j<=i){
            cout<<j;
            j++;
        }
        // 3RD TRIANGLE
        int start = i - 1;
        while(start){
            cout<<start;
            start--;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}