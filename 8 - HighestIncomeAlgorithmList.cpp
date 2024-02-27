//Comment: Professor is just making up random requirements eg. "more than 5" which led to me not getting full credit. No where stated infinite data insertion. eg("Wanted more than 5")
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

	cout <<"+-------------------------------+\n"
		<< "|                               |\n"
		<< "|    Highest Household Income   |\n" 
		<< "|          Program		        |\n"
		<< "+-------------------------------+\n\n" << endl;
	
	//Data variables
	double a, b, c, d, e;
	char highResidentId;

	cout << "Enter 1st household income data: \n" << endl;
	cin >> a;
	cout << "Enter 2nd household income data: \n" << endl;
	cin >> b;
	cout << "Enter 3rd household income data: \n" << endl;
	cin >> c;
	cout << "Enter 4th household income data: \n" << endl;
	cin >> d;
	cout << "Enter 5th household income data: \n" << endl;
	cin >> e;

	double highestIncome = 0;
	
	//In sequence order to compare between which is the biggest
	if (a>highestIncome) {
		highestIncome = a;
		highResidentId = 'a';
	}
	if (b > highestIncome) {
		highestIncome = b;
		highResidentId = 'b';
	}
	if (c > highestIncome) {
		highestIncome = c;
		highResidentId = 'c';
	}
	if (d > highestIncome) {
		highestIncome = d;
		highResidentId = 'd';
	}
	if (e > highestIncome) {
		highestIncome = e;
		highResidentId = 'e';
	}

	//finalize output
	cout << "The highest income from the inputted data is: [Resident " 
		<< highResidentId << "] with an income of [$" << highestIncome <<"]" << endl;



	cout << "\n========================\nSIT© Programming Inc.\n========================" << endl;
	return 0;
}
