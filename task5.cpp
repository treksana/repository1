#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double x, y;
    cout << "x= ";
    cin >> x;
    cout << "y= ";
    cin >> y;
    if ((x != 0) && (y != 0))
    {
        if ((x > 0) && (y > 0))
        {
            cout << "Первая четверть";
        }
        else if ((x < 0) && (y > 0))
        {
            cout << "Вторая четверть";
        }
        else if ((x < 0) && (y < 0))
        {
            cout << "Третья четверть";
        }
        else
        {
            cout << "Четвертая четверть";
        }
    }
    else
    {
        cout << "x и y не равны 0";
    }
    return 0;
}