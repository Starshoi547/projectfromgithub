#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

	cout << "Input a " << endl;
	cin >> a;

	cout << "Input b " << endl;
	cin >> b;

	cout << "Input c " << endl;
	cin >> c;


	if (a > b && a > c) {
		cout << "variable 'a' is the biggest." << endl;
	}
	else if (b > a&& b > c) {
		cout << "variable 'b' is the biggest." << endl;
	}
	else{
		cout << "variable 'c' is the biggest." << endl;
	}
}

