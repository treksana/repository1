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
            cout << "������ ��������";
        }
        else if ((x < 0) && (y > 0))
        {
            cout << "������ ��������";
        }
        else if ((x < 0) && (y < 0))
        {
            cout << "������ ��������";
        }
        else
        {
            cout << "��������� ��������";
        }
    }
    else
    {
        cout << "x � y �� ����� 0";
    }
    return 0;
}