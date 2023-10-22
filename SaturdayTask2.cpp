#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int hours, minutes;
    double h1, m1, hm;
    cout << "¬ведите часы ";
    cin >> hours;
    cout << "¬ведите минуты ";
    cin >> minutes;
    m1 = minutes * 6;
    h1 = (hours % 12) * 30 + minutes * 0.5;
    hm = abs(h1 - m1);
    if (hm > 180)
    {
        hm = 360 - hm;
    }
    cout << hm;
    return 0;
}