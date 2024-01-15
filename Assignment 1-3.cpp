#include <iostream>
using namespace std;

int main() {
	cout << "[]==============================[]" << endl;
	cout << "||                              ||" << endl;
	cout << "|| Annuity Calculation Program  ||" << endl;
	cout << "||                              ||" << endl;
	cout << "[]==============================[]\n" << endl;

	//variable data
	double loanAmount, interestRate, term, monthlyPayment;
	double x, y, z;

	//input data for calculation
	cout << "Please enter your desired loan amount:\n";
	cin >> loanAmount;
	cout << "Please enter the interest rate of your loan: \n";
	cin >> interestRate;
	cout << "Please enter the duration of your term: \n";
	cin >> term;

	//payment calculation
	x = pow(1 + interestRate / 120, -12 * term);
	y = interestRate / 120;
	z = (1 - x) / y;
	monthlyPayment = loanAmount / z;
	cout << "Your monthly payment will be " << monthlyPayment << endl;



	cout << "\n\n\n========================\nSIT© Programming Inc.\n========================" << endl;
	return 0;
}