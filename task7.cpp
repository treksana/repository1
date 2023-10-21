#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int num, a, b, c, d, e;
    cout << "¬ведите число";
    cin >> num;
    if (num > 9999 && num < 100000)
    {
        a = num / 10000;
        b = num % 10000 / 1000;
        c = num % 1000 / 100;
        d = num % 100 / 10;
        e = num % 10;
        if (a == e && b == d)
        {
            cout << "Ёто палиндром";
        }
        else
        {
            cout << "Ёто не палиндром";
        }
    }
    else
    {
        cout << "¬ведите п€тизначное число";
    }
}