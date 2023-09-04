#include <iostream>
using namespace std;

int main()
{
    int ageInYears;

    cout << "Enter your age in years:";
    cin >> ageInYears;

    cout << "Your age in years " << ageInYears << endl;

    int ageInMonths = ageInYears * 12;
    int ageInDays = ageInYears * 365;
    int ageInHours = ageInDays * 24;
    int ageInMinutes = ageInHours * 60;
    int ageInSeconds = ageInMinutes * 60;

    cout << "Your age in months " << ageInMonths << "." << endl;

    cout << "Your age in days " << ageInDays << "." << endl;

    cout << "Your age in hours " << ageInHours << "." << endl;

    cout << "Your age in minutes " << ageInMinutes << "." << endl;

    cout << "Your age in seconds " << ageInSeconds << "." << endl;

    return 0;
}
