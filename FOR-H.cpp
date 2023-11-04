#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double H = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
        H += 1.0 / i;
    cout << fixed << setprecision(4) << H;

    return 0;
}