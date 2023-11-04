#include <iostream>
using namespace std;
int FunA(int x)
{
    return 2 * x * x + 3 * x - 1;
}
int FunB(int x)
{
    return x * x * x;
}
int FunC(int y)
{
    return y * y * y;
}
int main()
{
    int a, b, c, x, y;
    cin >> x >> y;
    a = FunA(x);
    cout << "a = " << a << endl;
    b = FunB(x);
    cout << "b = " << b << endl;
    c = FunC(y);
    cout << "c = " << c << endl;

    return 0;
}