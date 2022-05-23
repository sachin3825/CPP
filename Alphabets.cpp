/* using ASCII table to determine the type of the character
*/

#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout<<"Enter a character or number"<<endl;
    cin>>ch;
    if(ch>=97 && ch<=122){
        cout<<"Lowercase character"<<endl;
    }
    else if (ch>=65 && ch<=90)
    {
        cout<<"UpperCase Character"<<endl;
    }
    else if(ch>=48 && ch<=57){
        cout<<"Its an Integer"<<endl;
    }
    
    
    return 0;
}
