#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n, k;
    float x, y;
    cout << "Êîëè÷åñòâî ëþäåé ";
    cin >> n;
    cout << "Íà÷àëüíûé ðåéòèíã ";
    cin >> x;
    cout << "Êîíå÷íûé ðåéòèíã ";
    cin >> y;
    k = (n * (y - x)) / (1 - y);
    cout << k;
    return 0;
}
