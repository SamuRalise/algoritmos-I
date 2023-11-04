#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int baskara(double a, double b, double c, double &x1, double &x2)
{
    int res = 0;

    if (b * b - 4 * a * c > 0 && a != 0)
    {
        x1 = (-b + sqrt(b * b - 4. * a * c)) / (2. * a);
        x2 = (-b - sqrt(b * b - 4. * a * c)) / (2. * a);
    }
    else if (b * b - 4 * a * c == 0 && a != 0)
    {
        x1 = (-b + sqrt(b * b - 4. * a * c)) / (2. * a);
        x2 = (-b - sqrt(b * b - 4. * a * c)) / (2. * a);
        res++;
    }
    else
        res--;

    return res;
}
int main()
{
    double a, b, c;
    double x1, x2, aux;
    int res = 0;

    cin >> a >> b >> c;

    res = baskara(a, b, c, x1, x2);

    if (x1 > x2)
    {
        aux = x1;
        x1 = x2;
        x2 = aux;
    }

    if (res == 1)
    {
        cout << "x = " << x1 << endl;
    }
    else if (res == 0)
    {
        cout << fixed << setprecision(2) << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else
        cout << "Nao ha raizes reais" << endl;
}