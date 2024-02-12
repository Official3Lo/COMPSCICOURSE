#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a;
	cout << "Please enter two characters: ";
	cin >> a;
	if (a.length() != 2) {
		cout << "You have entered a wrong response." << endl;
	}
	else {
		if (a.at(0) == 'M') {
			switch (a.at(1))
			{
			case '1':
				cout << "Mathematics Freshman" << endl;
				break;
			case '2':
				cout << "Mathematics Sophomore" << endl;
				break;
			case '3':
				cout << "Mathematics Junior" << endl;
				break;
			case '4':
				cout << "Mathematics Senior" << endl;
				break;
			default:
				cout << "error, you put on wrong response." << endl;
			}
		}
		else if (a.at(0) == 'C') {
			switch (a.at(1))
			{
			case '1':
				cout << "Computer Science Freshman" << endl;
				break;
			case '2':
				cout << "Computer Science Sophomore" << endl;
				break;
			case '3':
				cout << "Computer Science Junior" << endl;
				break;
			case '4':
				cout << "Computer Science Senior" << endl;
				break;
			default:
				cout << "error, you put in wrong response." << endl;
			}
		}
		if (a.at(0) == 'I') {
			switch (a.at(1))
			{
			case '1':
				cout << "information technology Freshman" << endl;
				break;
			case '2':
				cout << "information technology Sophomore" << endl;
				break;
			case '3':
				cout << "information technology Junior" << endl;
				break;
			case '4':
				cout << "information technology Senior" << endl;
				break;
			default:
				cout << "error, you put in wrong response." << endl;
			}
		}
	}
}
