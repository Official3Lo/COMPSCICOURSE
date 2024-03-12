
#include<iostream>
#include<fstream>

using namespace std;

int main() {
	//data variable
	int a,b,c;

	cout << "+-------------------------------+" << endl;
	cout << "|       Week 9 Exercise         |" << endl;
	cout << "|     Nested Loop Statement     |" << endl;
	cout << "|                               |" << endl;
	cout << "+-------------------------------+\n" << endl;


	do {
		cout << "\n Select your menu options:\n"
			<< "--=============================--\n"
			<< "1. Triangle \n2. Rectangle \n3. 50 Int External Calculations\n4.Exit\n" << endl;
		cin >> a;

		switch (a) {
		case 1:
			int base;
			cout << "Please enter base of the triangle: \n";
			cin >> base;

			for (int k = base; k >= 1; k--) {
				for (int i = 0; i < k; i++)
					cout << "*";
				cout << endl;
			}

			break;

		case 2:
			int i, j;

			cout << "Enter the height base of the rectangle: \n";
			cin >> a;
			cout << "\nEnter the length base of the rectangle: \n";
			cin >> b;

			for (i = 0; i < a; i++) {
				for (j = 0; j < b; j++) {
					if (i == 0 || i == (a-1) || j == 0 || j == (b - 1))
						cout << "* ";
					else
						cout << "  ";
				}
				cout << endl; // moved outside of the inner loop
			}
			break;

		case 3:
			ifstream inputFile("input.txt");
			if (!inputFile) {
				cerr << "Error: Unable to open input file." << endl;
				return 1;
			}

			int num, sum = 0, count = 0;

			while (inputFile >> num && count < 50) { // Read integers until reaching the end of file or reading 50 integers
				sum += num;
				count++;
			}

			inputFile.close(); // Close the input file

			cout << "Sum of the first " << count << " integers is: " << sum << endl;

			break;
		}

	} while (a != 4);

	return 0;
}


/*
int main() {
	int a, b, c;
	double x, y, z;
	char d, e, f;

	cout << "+-------------------------------+\n" << endl;
	cout << "|       Week 9 Exercise         |\n" << endl;
	cout << "|     Nested Loop Statement     |\n" << endl;
	cout << "|                               |\n" << endl;
	cout << "+-------------------------------+\n" << endl;

	cout << "\n Select your menu options:\n"
		<< "--=============================--"
		<<"1. Triangle \n2. Rectangle \n3. 50 Int External Calculations\n4.Exit\n" << endl;
	do {
		switch(a) {
		case 1:
			//Instruction 1
			cout << "Please enter base of the triangle: \n" << endl;
			cin >> a;

			for (int k = a; k >= 1; k--) {
				for (int i = 0; i < k; i++)
					cout << "*";
				cout << endl;
			}
			break;

		case 2:
			//Instruction 2 5:20
			cout << "Please enter base of the rectangle: \n" << endl;
			cin >> a;
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 6; j++) {
					cout << "* ";
				}
				cout << endl;
			}

			break;
		}

	} while (a != 3);



	return 0;
}

*/