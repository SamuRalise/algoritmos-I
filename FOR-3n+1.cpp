#include <iostream>
using namespace std;

int collatz(int n)
{
    if (n % 2 == 0)
    {
        return n / 2;
    }
    else
    {
        return 3 * n + 1;
    }
}

// Retorna o comprimento do ciclo de Collatz para um dado número n
int ciclo_collatz(int n)
{
    int comprimento = 1;
    while (n != 1)
    {
        n = collatz(n);
        comprimento++;
    }
    return comprimento;
}

int main()
{
    int i, j, aux;
    bool f = false;

    cin >> i >> j;
    if (i > j)
    {
        aux = i;
        i = j;
        j = aux;
        f = true;
    }
    int comprimento_maximo = 0;
    for (int n = i; n <= j; n++)
    {
        int comprimento = ciclo_collatz(n);
        if (comprimento > comprimento_maximo)
        {
            comprimento_maximo = comprimento;
        }
    }
    if (f)
    {
        cout << j << " " << i << " " << comprimento_maximo << endl;
    }
    else
        cout << i << " " << j << " " << comprimento_maximo << endl;
        
    return 0;
}
