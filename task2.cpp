#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, m1, m2, t;
    cout << "Начальный год ";
    cin >> a;
    cout << "Конечный год ";
    cin >> b;
    m1 = a / 4;
    m2 = b / 4;
    if ((b % 4 == 0 && b % 100 != 0) || b % 400 == 0)
    {
        t = m2 - m1 + 1;
    }
    else
    {
        t = m2 - m1;
    }
    cout << t;
    return 0;
}