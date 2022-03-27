#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;

	cout << "Input a " << endl;
	cin >> a;

	cout << "Input b " << endl;
	cin >> b;

	cout << "Input c " << endl;
	cin >> c;

	cout << "Input d " << endl;
	cin >> d;



	if (a > b && a > c && a > d) {
		cout << "variable 'a' is the biggest." << endl;
	}
	else if (b > a && b > c && b > d) {
		cout << "variable 'b' is the biggest." << endl;
	}
	else if (c > a && c > b && c > d){
		cout << "variable 'c' is the biggest." << endl;
	}
	else {
		cout << "variable 'd' is the biggest." << endl;
	}
}

