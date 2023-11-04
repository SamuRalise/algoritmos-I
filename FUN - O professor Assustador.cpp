#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double notas;
    int n, i;
    double soma = 0, media;
    
    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> notas;
        soma += notas;
    }
    media = soma / i;

    cout << fixed << setprecision(2) << endl;
    cout << "Media da turma = " << media << endl;
}