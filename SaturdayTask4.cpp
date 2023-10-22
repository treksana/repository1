#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846
#include <iomanip>
using namespace std;
int main()
{
    int a, b;
    double sc;
    cout << "ƒлина стороны огорода и длина веревки ";
    cin >> a >> b;
    if ((a > 100 || b > 100) || (b > a / 2))
    {
        cout << "¬ведите числа удовлевотвор€ющие условию";
    }
    sc = M_PI * pow(b, 2);
    std::cout << std::fixed;
    std::cout << std::setprecision(3);
    std::cout << sc;
    return 0;
}