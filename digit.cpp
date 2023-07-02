#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a digit";
    cin>>a;
    if(a<=0 || a<=9)
    {
        cout<<"Single Digit ";

    }
    else
    if(a<=10 || a<=99)
     {
        cout<<"Two Digit ";

     }
     else 
     if(a<=100 || a<=999)
     {
        cout<<"Three Digit ";
     }
     else {
        cout<<"This is not Single ,Two and Three Digit";
     }
     return 0;
}
