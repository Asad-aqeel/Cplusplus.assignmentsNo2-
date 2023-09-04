#include <iostream>
using namespace std;

int main()
{
    int x, y, temp;

    cout << "Enter number in x: ";
    cin >> x;
    cout << "Enter number in y: ";
    cin >> y;

    temp = x;
    x = y;
    y = temp;

    cout << "X is " << x << " now, and y is " << y << " now after swapping." << endl;

    return 0;
}
