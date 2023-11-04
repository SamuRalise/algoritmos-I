#include <iostream>

using namespace std;

int main()
{
    int n, notas;
    int like = 0, dislike = 0;

    cin >> n;
    while (n < 0 || n > 1000)
        cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> notas;
        while (notas != 1 && notas != -1)
            cin >> notas;
        if (notas == 1)
            like++;
        else
            dislike++;
    }
    if (like > dislike)
        cout << "A maioria gostou";
    else if (like < dislike)
        cout << "A maioria nao gostou";
    else
        cout << "Deu empate";

    return 0;
}