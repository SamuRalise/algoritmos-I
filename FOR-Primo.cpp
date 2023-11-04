#include <iostream>

using namespace std;

int main()
{
    int n;
    bool primo = false;
    int cont = 0;

    cin >> n;
    while (n < 0 || n > 1000)
        cin >> n;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            cont++;
    }
    if (cont <= 1)
        primo = true;

    if (primo)
        cout << "primo";
    else
        cout << "nao e primo";

    return 0;
}