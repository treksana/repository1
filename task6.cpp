#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c, d;
    cout << "Введите число ";
    cin >> a;
    if (a > 99 && a < 1000)
    {
        b = a / 100;
        c = a % 100 / 10;
        d = a % 10;
        if ((b == c) || (b == d) || (d == c))
        {
            cout << "Есть одинаковые цифры";
        }
        else
        {
            cout << "Нет одинаковых цифр";
        }
    }
    else
    {
        cout << "Введите трехзначное число";
    }
}