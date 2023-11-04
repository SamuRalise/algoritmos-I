#include <iostream>
#include <iomanip>

using namespace std;

double PesoIdeal(double altura, char sexo)
{
    if (sexo == 'M')
        return 72.7 * altura - 58.0;
    else
        return 62.1 * altura - 44.7;
}
int main()
{
    double alt;
    char sexo;
    double pesoI;

    cin >> alt;
    cin >> sexo;

    pesoI = PesoIdeal(alt, sexo);

    cout << fixed << setprecision(2) << endl;
    cout << "Peso ideal = " << pesoI << " kg" << endl;
}