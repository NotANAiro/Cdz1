#include <iostream>

using namespace std;

void highernum(int,int);

int main()
{
    int num,num2;
    cout<<"Input first number:\n";
    cin>>num;
    cout<<"Input secund number:\n";
    cin>>num2;
    highernum(num,num2);
}

void highernum(int x,int y)
{
    if(x > y)
    {
        cout<<x<<" is higher \n";
    }
    else cout<<y<<" is higher \n";

}