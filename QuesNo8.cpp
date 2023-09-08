#include <iostream>
using namespace std;

//Functions prototype.. 

int product(int a, int b, int c)
    
{

    int d = a*b*c;
}

int main()
{

    int Num1, Num2,Num3;

    cout << "Enter first number:";
    cin >> Num1;

    cout << "Enter second number:";
    cin >> Num2;

    cout << "Enter third number:";
    cin >> Num3;


    cout<<"The values you multiply are " <<product(Num1,Num2,Num3) <<"." <<endl;

    return 0;
}
