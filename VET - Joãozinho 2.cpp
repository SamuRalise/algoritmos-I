#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    int x[20], y[20];
    char op[20];

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i];
    for (int i = 0; i < n; i++)
        cin >> y[i];
    for (int i = 0; i < n; i++)
        cin >> op[i];
    for(int b = 0; b < n; b++)
    {
        if(op[b] == '*')
            cout << x[b] << " * " << y[b] << " = " << x[b] * y[b] << endl;
        else if(op[b] == '-')
            cout << x[b] << " - " << y[b] << " = " << x[b] - y[b] << endl;
        else if(op[b] == '+')
            cout << x[b] << " + " << y[b] << " = " << x[b] + y[b] << endl;
        else if(op[b] == '/')
            cout << fixed << setprecision(2) << x[b] << " / " << y[b] << " = " << x[b] * 1.0 / y[b] << endl;        

    }
    return 0;
}