#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x, y, s;
    cout << "x ";
    cin >> x;
    cout << "y ";
    cin >> y;
    s = pow((1 - tan(x)), (1 / tan(x)) + cos(x - y));
    cout << s;
    return 0;
}