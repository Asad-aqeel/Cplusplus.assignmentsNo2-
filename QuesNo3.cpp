#include <iostream>
using namespace std;

int main()
{

    int days, income;

    cout << "Enter days:";
    cin >> days;

    cout << "Enter income:";
    cin >> income;

    if (days > 365)
    {
        (income - 2.5);
        income = (income * days) / 100;
        cout << "The remaining income after zakat deduction is " << income <<"%" <<"." << endl;
    }

    else
    {
        cout << "Days are less then a year." << endl;
    }

    return 0;
}
