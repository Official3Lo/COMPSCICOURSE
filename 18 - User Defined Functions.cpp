#include <iostream>
#include <cmath>

using namespace std;

//User-Defined Function 1
int sumSquare(int start, int end) {
	int sum = 0;

	for (int i = start; i <= end; ++i) {
		sum += pow(i, 2);
	}

	return sum;
}

//User-Defined Function 2 
void randomizer(int iterations) {
	int countH = 0, countT = 0;

	for (int i = 0; i < iterations; ++i) {
		int randomNumber = rand() % 2;
		if (randomNumber == 0) {
			cout << 'H';
			countH++;
		}
		else {
			cout << 'T';
			countT++;
		}
	}

	cout << endl;
	cout << countH << " Hs " << countT << " Ts" << endl;
}

int main() {
	cout << "+-------------------------------+" << endl;
	cout << "|          User-Defined	     |" << endl;
	cout << "|       Functions Program       |" << endl;
	cout << "|                               |" << endl;
	cout << "+-------------------------------+\n" << endl;

	// 1st user-defined function
	int x, y;

	cout << "First function of sumSquare calculations ->" << endl;
	cout << "\nEnter 1st sum #: ";
	cin >> x;
	cout << "Enter 2nd sum #: ";
	cin >> y;

	cout << "Total calculation is: " << sumSquare(x, y) << endl;

	// 2nd user-defined function
	int a;

	cout << "Second function of rand() -> " << endl;
	cout << "\nEnter the loop amount for rand() function: ";
	cin >> a;
	randomizer(a);

	return 0;
}











