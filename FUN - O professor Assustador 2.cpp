#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double notas[100];
    int n, i, cont = 0, menor = 0, maior = 0;
    double soma = 0, media;

    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> notas[i];
        soma += notas[i];
    }
    media = soma / i;
    cout << fixed << setprecision(2) << endl;
    cout << "Media da turma = " << media << endl;
    for (int b = 0; b < i; b++)
    {
        if (media <= notas[b])
            maior++;
        else
            menor++;
    }
    cout << "Alunos com nota abaixo da media: " << menor << endl;
    cout << "Alunos com nota acima da media: " << maior << endl;
}