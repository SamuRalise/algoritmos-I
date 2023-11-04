#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void media(int x, int y, float &m)
{
    m = sqrt(x * y);
}
int main()
{
    int x, y;
    float m;

    cin >> x >> y;

    media(x, y, m);

    cout  << fixed << setprecision(2) << "Media: " << m;

    return 0;
}