#include <iostream>

using namespace std;

struct dados {

    int mat;
    double np1, np2;
};
int main()
{
    dados aluno;

    cout << "Digite o seu numero de matricula:" << endl;
    cin >> aluno.mat;
    cout << "Digite a nota da primeira prova:" << endl;
    cin >> aluno.np1;
    cout << "Digite a nota da segunda prova:" << endl;
    cin >> aluno.np2;

    cout << "Matricula do aluno: " << aluno.mat << endl;
    cout << "Nota da primeira prova: " << aluno.np1 << endl;
    cout << "Nota da segunda prova: " << aluno.np2 << endl;

    return 0;
}