#include <iostream>
#include <iomanip>

using namespace std;

int sinal(int num)
{
    if (num > 0)
        return 1;
    else if (num < 0)
        return -1;
    else
        return 0;
}
int main()
{
    int num;
    int res;

    cin >> num;

    res = sinal(num);

    if (res == 1)
        cout << "Positivo" << endl;
    else if (res == -1)
        cout << "Negativo" << endl;
    else
        cout << "Zero" << endl;
}