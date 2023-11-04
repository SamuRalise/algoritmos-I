#include <iostream>
using namespace std;
int fun(int a, int b, int c)
{
    return b * b - (4 * a * c);
}
int main()
{
    int a, b, c;
    int delta;

    cin >> a;
    while (a == 0)
        cin >> a;
    cin >> b >> c;
    delta = fun(a, b, c);

    cout << "delta = " << delta << endl;

    return 0;
}