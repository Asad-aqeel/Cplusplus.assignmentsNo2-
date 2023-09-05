#include <iostream>
using namespace std;

int main()
{
    int income, days;

    cout << "Enter your income: $";
    cin >> income;

    cout << "Enter the number of days: ";
    cin >> days;

    if (days > 365)
    {

        int zakat = 0.025 * income;
        income -= zakat;
        cout << "2.5% Zakat deducted: $" << zakat << endl;
    }

    switch (days < 365)
    {
    case 1:
    {
        cout << "Days are less then a year." << endl;
    }

    break;

    default:

        cout << "Your remaining income after zakat deduction: $" << income << "%" << endl;
        break;
    }

    return 0;
}
