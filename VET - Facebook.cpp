#include <iostream>

using namespace std;

int main()
{
    int n, view;
    int menos = 0, mais = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> view;
        if (view > 10000)
            mais++;
        else
            menos++;
    }
    cout << mais << " video(s) com mais de 10M views" << endl;
    cout << menos << " video(s) com menos de 10M views" << endl;

    return 0;
}