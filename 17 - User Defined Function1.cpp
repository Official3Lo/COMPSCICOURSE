#include <iostream>
#include <cmath>

using namespace std;

//user-defined function
double loanCalculation(double interestRate, double loanAmount, double term) {
	//Re: Data variables
	double interestRate, loanAmount, term, loanTotal;
	double x, y, z;

	//Calculations
	x = pow((1 + interestRate / 1200), -12 * term);
	y = interestRate / 1200;
	z = (1 - x) / y;
	loanTotal = loanAmount / z;

	return loanTotal;
}

int main() {
	cout << "+-------------------------------+" << endl;
	cout << "|          User-Defined	     |" << endl;
	cout << "|        Function Program       |" << endl;
	cout << "|                               |" << endl;
	cout << "+-------------------------------+\n" << endl;

	//Data variables
	double a, b, c;

	//Inputs
	cout << "\nEnter interest rate: " << endl;
	cin >> a;

	cout << "Enter loan amount: " << endl;
	cin >> b;

	cout << "Enter term: " << endl;
	cin >> c;


	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "\nYour monthly payment is " << loanCalculation(a,b,c) << endl;

	return 0;
}


/*
#include <iostream>
#include <cmath>

using namespace std;

//user-defined function
double loanCalculation(double h, double i) {
	if (i == 0) {
		cout << "Error: Division by zero!" << endl;
		return 0;
	}
	double result = h / i;
	return result;
}

int main() {
	cout << "+-------------------------------+" << endl;
	cout << "|          User-Defined	     |" << endl;
	cout << "|        Function Program       |" << endl;
	cout << "|                               |" << endl;
	cout << "+-------------------------------+\n" << endl;

	//Data variables
	double interestRate, loanAmount, term;
	double x, y, z;

	//Inputs
	cout << "\nEnter interest rate: " << endl;
	cin >> interestRate;

	cout << "Enter loan amount: " << endl;
	cin >> loanAmount;

	cout << "Enter term: " << endl;
	cin >> term;

	//Calculations
	x = pow((1 + interestRate / 1200), -12 * term);
	y = interestRate / 1200;
	z = (1 - x) / y;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "\nYour monthly payment is " << loanCalculation(loanAmount, z) << endl;

	return 0;
}
*/


/*

#include<iostream>
#include<cmath>

using namespace std;

//user-defined function
double loanCalculation(double h, double i) {
	double result = h / i;
	return result;
}
 // Opt: function for interest estimation.
double estimateInterest(double e, double f) {
	double x = pow((1 + e / 1200), -12 * f);
	double y = e / 1200;
	double g = (1 - x) / y;

	return g;
}

int main() {

	cout << "+-------------------------------+" << endl;
	cout << "|          User-Defined	     |" << endl;
	cout << "|        Function Program       |" << endl;
	cout << "|                               |" << endl;
	cout << "+-------------------------------+\n" << endl;

	//Data variables
	double interestRate, loanAmount, term;
	double x, y, z;

	//Inputs
	cout << "\nEnter interest rate: " << endl;
	cin >> interestRate;

	cout << "Enter loan amount: " << endl;
	cin >> loanAmount;

	cout << "Enter term: " << endl;
	cin >> term;

	//Calculations
	//double interestEst = estimateInterest(interestRate, term)
	x = pow((1 + interestRate / 1200), -12 * term);
	y = interestRate / 1200;
	z = (1 - x) / y;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "\nYour monthly payment is " << loanCalculation(loanAmount, z) << endl; //replace z InterestEst

	return 0;
}
*/