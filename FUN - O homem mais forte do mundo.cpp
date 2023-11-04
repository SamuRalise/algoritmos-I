#include <iostream>
#include <cstring>

using namespace std;

struct dados
{
    char nome[100];
    int notas;
    int soma;
};
double vencedor(dados atleta[], int tam)
{
    int pos, maior = -999;
    for (int i = 0; i < tam; i++)
    {
        if (maior < atleta[i].soma)
        {
            maior = atleta[i].soma;
            pos = i;
        }
    }
    return pos;
}
int main()
{
    dados atleta[20];
    double n;
    int i = 0, pos;

    cin >> n;
    cin.ignore();
    do
    {
        cin.getline(atleta[i].nome, 100);
        atleta[i].soma = 0;
        for (int b = 0; b < 4; b++)
        {
            cin >> atleta[i].notas;
            atleta[i].soma += atleta[i].notas;
        }
        cin.ignore();
        i++;
    } while (i < n);

    pos = vencedor(atleta, i);

    cout << "Vencedor: " << atleta[pos].nome;
}