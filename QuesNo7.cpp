#include<iostream>
using namespace std;

   //Dynamic multiplication table using c++...

int main (){

    int number;
    
    cout<<"Enter a number that can be multiply :";
    cin>>number;

    for (int i = 1; i <=10; i++)
    {
        cout<<number*i<<endl;
    }
    
    return 0;
}
