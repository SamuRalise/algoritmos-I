#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void converte(float F, float &C, float &K)
{
    C = (5.0 / 9) * (F - 32);
    K = C + 273;
}
int main()
{
    double F;
    float C, K;

    cin >> F;
    converte(F, C, K);

    cout << fixed << setprecision(2) << endl;
    cout << "Celsius: " << C << endl;
    cout << "Kelvin: " << K << endl;

    return 0;
}