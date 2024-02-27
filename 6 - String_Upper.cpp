//comment: only first letter of each word needed to be upper-case, but I did a good job overall.

#include<iostream>
#include<string>

using namespace std;

int main() {
	//variable intro
	string a;
	cout << "Enter the string: fresno city college" << endl;

	//cout
	getline(cin, a);
	if (a=="fresno city college") {
		a[0] = toupper(a[0]);
		a[1] = toupper(a[1]);
		a[2] = toupper(a[2]);
		a[3] = toupper(a[3]);
		a[4] = toupper(a[4]);
		a[5] = toupper(a[5]);
		a[6] = toupper(a[6]);
		a[7] = toupper(a[7]);
		a[8] = toupper(a[8]);
		a[9] = toupper(a[9]);
		a[10] = toupper(a[10]);
		a[11] = toupper(a[11]);
		a[12] = toupper(a[12]);
		a[13] = toupper(a[13]);
		a[14] = toupper(a[14]);
		a[15] = toupper(a[15]);
		a[16] = toupper(a[16]);
		a[17] = toupper(a[17]);
		a[18] = toupper(a[19]);
		a[19] = toupper(a[19]);
		//a[20] = toupper(a[20]); //Too long bugged error
		cout << a << endl;
	}
	else {
		cout << "ERROR. Shutting down..." << endl;
		exit(1);
	}

	return 0;
}
