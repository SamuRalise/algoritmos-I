#include <iostream>

using namespace std;

int main(){
	int n, x1 = 0, x2 = 1, x3;
	
	cin >> n;
	cout << x1 << endl;
	cout << x2 << endl;
	for(int i = 2; i < n; i++)
	{
		x3 = x1 + x2;
		cout << x3 << endl;
		x1 = x2;
		x2 = x3;
		
	}
	
	return 0;
}