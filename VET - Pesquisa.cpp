#include <iostream>

using namespace std;

int main()
{
    int vet[100];
    int i = 0;
    int x, pos;
    bool achou = false;

    cin >> vet[i];
    while (vet[i] != 0)
    {
        i++;
        cin >> vet[i];
    }

    cin >> x;
    for (int b = 0; b < i; b++)
    {
        if (x == vet[b])
        {
            achou = true;
            pos = b;
        }
    }
    if(achou)
        cout << "Elemento " << x << " encontrado na posicao " << pos;
    else
        cout << "Elemento " << x << " nao foi encontrado";

        return 0;
}