#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n, k;
    float x, y;
    cout << "���������� ����� ";
    cin >> n;
    cout << "��������� ������� ";
    cin >> x;
    cout << "�������� ������� ";
    cin >> y;
    k = (n * (y - x)) / (1 - y);
    cout << k;
    return 0;
}