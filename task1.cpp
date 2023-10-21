#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "Введите число ";
    cin >> a;
    if (a > 9 && a < 100)
    {
        b = a / 10;
        c = a % 10;
        if (b > c)
        {
            cout << "Первая цифра наибольшая";
        }
        else if (c > b)
        {
            cout << "Первая цифра наименьшая";
        }
        else
        {
            cout << "Цифры равны";
        }
    }
    else
    {
        cout << "Введите двузчначное число";
    }
    return 0;
}