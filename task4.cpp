#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n, k;
    float x, y;
    cout << "Количество людей ";
    cin >> n;
    cout << "Начальный рейтинг ";
    cin >> x;
    cout << "Конечный рейтинг ";
    cin >> y;
    k = (n * (y - x)) / (1 - y);
    cout << k;
    return 0;
}