#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "You entered a small letter." << endl;
    }

    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "You entered a capital letter." << endl;
    }

    else if (ch >= '0' && ch <= '9')
    {
        cout << "You entered a digit." << endl;
    }

    else
    {
        cout << "You entered a special character." << endl;
    }

    return 0;
}
