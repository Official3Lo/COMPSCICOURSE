#include <iostream>
using namespace std;

int main() {
	cout << "[]==============================[]" << endl;
	cout << "||                              ||" << endl;
	cout << "|| Annuity Calculation Program  ||" << endl;
	cout << "||           >Redo<             ||" << endl;
	cout << "[]==============================[]\n" << endl;

	//variable data
	double depositAmount, interestRate, term, futureBalance;
	double x, y, z;

	//input data for calculation
	cout << "Please enter your deposit amount:\n";
	cin >> depositAmount;
	cout << "Please enter the interest rate of your deposit: \n";
	cin >> interestRate;
	cout << "Please enter the duration of your term: \n";
	cin >> term;

	//payment calculation
	x = (pow((1 + interestRate / 1200), 12 * term))-1;
	y = interestRate / 1200;
	z = x / y;
	futureBalance = depositAmount / z;
	cout << "Your future payment within the term "<< term <<" yrs and "<< interestRate << "rate applied to your deposit amt is : " << futureBalance << endl;



	cout << "\n\n\n========================\nSIT© Programming Inc.\n========================" << endl;
	return 0;
}