#include<iostream>
#include<cmath>

using namespace std;



int main() {
	//Final: change all data input from 5 -> 200

	int a[200], count = 0;
	double averageTotal = 0, highest=0, lowest = INT_MAX; //numeric_limits<double>::max()
	cout << "Enter the data of 200 houses sale's price in Fresno County: " << endl;

	//Data entry + save
	for (int i= 0; i < 200; i++){
		cin >> a[i];
	}

	//Display input data
	cout << "\nHouse Data Sale's Price:\n"
		<<"========================" << endl;
	for (int i= 0; i < 200; i++) {
		cout<< a[i]<<endl;
	}



	//calculate and display highest and lowest price []
	for (int i = 0; i < 200; i++) {
		if (a[i] > highest) {
			highest = a[i];
		}
		if (a[i] <= lowest) { //rework pls
			lowest = a[i];
		}

	}

	//calculate and display average sale price []
	for (int i = 0; i < 200; i++) {
		if (a[i]) {
			averageTotal = averageTotal + a[i];
		}
		averageTotal = (averageTotal) / (200);
	}


	//calculate and display # of house < $200k [x]
	for (int i= 0; i < 200; i++) {
		if (a[i] < 200000) {
			count++;
			a[i] = 0;
		}
	}



	//Data Output

		//Highest and Lowest sales
		cout << "\nHighest house price value: $" << highest <<" USD"<< endl;
		cout << "Lowest house price value: $" << lowest << " USD" << endl;

		//Average sales
		cout << "\nTotal average price sale: $" << averageTotal << " USD" << endl;

		//Under $200k sales
		cout << "\nTotal houses under $200,000.00 USD: " << count << " ->" << endl;
		for (int i = 0; i < 200; i++) {
			cout << a[i] << endl;
	}
	return 0;
}





/*
//pt1
int main() {
	double a[5], s = 0;
	cout << "Please enter 5 nums:" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 5; i++) {
		s+= a[i];
	}

	cout << "Sum is " << s << endl;
	return 0;
}
*/

/*
//pt2
int main() {
	double a[5] = { 2, -1,5,3,7 };
	double  m = a[0];

	for (int i = 0; i < 5; i++) {
		if (a[i] > m){
			m = a[i];
			}
	}
	cout << "largest data is " << m << endl;
	return 0;
}
*/
