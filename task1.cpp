#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "������� ����� ";
    cin >> a;
    if (a > 9 && a < 100)
    {
        b = a / 10;
        c = a % 10;
        if (b > c)
        {
            cout << "������ ����� ����������";
        }
        else if (c > b)
        {
            cout << "������ ����� ����������";
        }
        else
        {
            cout << "����� �����";
        }
    }
    else
    {
        cout << "������� ����������� �����";
    }
    return 0;
}