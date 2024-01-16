#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main() {
	cout << "________________________" << endl;
	cout << "|[ Week 2 Lab Program ]|" << endl;
	cout << "|______________________|\n" << endl;

	int input;
	
	cout << "\n+--------------------------------------------------+" << endl;
	cout << "Choose which option you would like to continue with: \n" 
		<< "[1.] Celcius to Fahrenheit Table \n" 
		<< "[2.] Storing Data to two variables " << endl;
	cout << "+--------------------------------------------------+\n" << endl;

	cin >> input;

	if (input == 1) {
	/*Program 1: Celcius and Fahrenheit */

	//variable data
		//double celcius, fahrenheit;
		//fahrenheit = (9 / 5) * celcius + 32;

	//output and calculation using for-loop
		cout.setf(ios::fixed);
		cout.precision(1);
		cout << "================================================" << endl;
		cout << setw(11) << "Celcius" << setw(20) << "Fahrenheit" << endl;
		cout << "================================================" << endl;
		for (int a = 10; a <= 50; a = a + 10) {
			cout << setw(8) << a << setw(20) << 9 / 5.0 * a + 32 << endl;
		}
	}
	
	if (input == 2) {
	/*Program 2: Extracting and adding integers */
		// %10 - extracts data, /= 10 removes the last digit
	
		int a, sum=0;

		cout << "enter a number between 0 and 1000: " << endl;
		cin >> a;

		while (a > 0) {
			int digit = a % 10;
			sum += digit;
			a /= 10;
		}

		cout << "sum of digit is " << sum << endl;
		
	}
	cout << "\n\n========================\nSIT© Programming Inc.\n========================" << endl;
	return 0;
}