#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

	cout << "+-------------------------------+\n"
		<< "|                               |\n"
		<< "|2.8-Sentinel Control While-Loop|\n"
		<< "|          Program		        |\n"
		<< "+-------------------------------+\n\n" << endl;

	//Data variables
	int a, total200 = 0, total800 = 0, total800plus = 0;
	char choice;
	int i = 0; //to end the while-loop

	while (i < 1) {
		//data input
		cout << "enter customer spending: \n" << endl;
		cin >> a;

		//confirmation of ending or continuing input data
		cout << "\nContinue? "
			<< "\n -> Y/y for yes | N/n for no\n" << endl;
		cin >> choice;

		//processing...
		if (choice == 'Y' || choice == 'y') {
			cout << "Okay. Looping back... Go add some more." << endl;
			if (a <= 200) {
				total200++;
			}
			else if (a > 200 && a <= 800) {
				total800++;
			}
			else {
				total800plus++;
			}
		}
		else if (choice == 'N' || choice == 'n') {
			cout << "Okay, it's over. Time to handle the biggies." << endl;
			i++;
			if (a <= 200) {
				total200++;
			}
			else if (a > 200 && a <= 800) {
				total800++;
			}
			else {
				total800plus++;
			}
		}
		else {
			cout << "wrong input." << endl;
			exit(2);
		}
	}

	//final output
	cout << "Okay, for the final result: \n"
		<<"[]=======================================[]\n"
		<< "For 1-200 = " << total200 << "\nFor 200-800 = "
		<< total800 << "\nFor 800+ = " << total800plus
		<<"\n[]=======================================[]" << endl;

	cout << "\n========================\nSIT© Programming Inc.\n========================" << endl;
	return 0;
}
