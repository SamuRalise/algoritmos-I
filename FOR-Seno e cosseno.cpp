#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double n1, n2;
    double inicial, final;
    bool positivo = false;

    cin >> n1;
    cin >> n2;

    for (double i = n1; i <= n2; i += 0.1)
    {
        if (sin(i) * cos(i) > 0 && !positivo)
        {
            inicial = i;
            positivo = true;
        }
        else if(sin(i) * cos(i) <= 0 && positivo)
        {
            final = i - 0.1;
            break;
        }
    }
    cout << inicial << " a " << final;

    return 0;
}