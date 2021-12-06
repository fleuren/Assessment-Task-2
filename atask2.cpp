#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	string n; // string to input the name of the user
	int num; // number input, for all three codes
	int out1; // output for the factorial code
	int out2; // output for the 10 to 1 table code

//User Input Code
	cout << "|Enter your name: " << endl;
	getline(cin, n);
	cout << endl;
	cout << "|The user's name is: " << n << endl;
		cout << endl;
	cout << "|Please enter a number:" << endl;
	cin >> num;

//Factorial Code
	cout << endl;
	cout << "|Factorial:" << endl;
	for (int f = num; f >= 0; f--){
		out1 = num * f;
		cout << num << " x " << f << " = " << out1 << endl;
	}
		cout << endl;
//Table -- 10 to 1 Code
	int multi = 10; // multiplication table for the 10 to 1 table code
	cout << "|Table -- 10 to 1:" << endl;
	while (multi > 0)
	{
		out2 = (num*multi);
		cout << num << " x " << multi << " = " << out2 << endl;
		multi--;
	}
		cout << endl;
//Exponent Code
	cout << "|Exponents x^10 to x^5:" << endl;
	int e = 10; // exponent range, will be decremented to 5
	do{
	cout << num << "^" << e << " = " << pow (num,e) << endl;
	e--;
	}while (e > 4);

	return 0;
}