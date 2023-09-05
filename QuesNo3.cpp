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

        int zakat = (2.5 / 100) * income;
        income -= zakat;
        cout << "2.5% Zakat deducted. Your new income after Zakat: $" << income << endl;
    }

    else
    {
        cout << "No Zakat deduction needed. Your income remains: $" << income << endl;
    }

    return 0;
}
