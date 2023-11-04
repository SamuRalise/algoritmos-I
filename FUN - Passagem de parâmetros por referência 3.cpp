#include <iostream>
using namespace std;
void troca(int &X, int &Y)
{
    int aux;

    aux = X;
    X = Y;
    Y = aux;
}
int main()
{
    int x, y;

    cin >> x >> y;

    troca(x, y);

    cout << x  << " " << y;

    return 0;
}