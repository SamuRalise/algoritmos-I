#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, notas[20];
    double media, soma = 0;
    int maior = 0, menor = 0;
    int b = 0;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> notas[i];
        soma += notas[i];
    }
    media = soma / n;
    
    while(b < n)
    {
        if(notas[b] >= media)
            maior++;
        else
            menor++;    
        b++;
    }
    cout << "Media da turma: " << fixed << setprecision(2) << media << endl;
    cout << "Alunos com nota acima da media: " << maior << endl;
    cout << "Alunos com nota abaixo da media: " << menor << endl;
    
    return 0;
}