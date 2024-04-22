#include<iostream>
#include<cmath>

using namespace std;

//user-defined function for calculations
void payment(double month, double intRate, double term, double& s1, double& s2, double& s3) {
    cout.setf(ios::fixed);
    cout.precision(2);
    s1 = month / ((1 - (pow(1 + intRate / 1200, -12 * term))) / (intRate / 1200));
    s2 = s1 * (12 * term);
    s3 = s2 - month;
}

int main() {

    //data variables
    int x = 1;
    double month, intRate, term, x1, x2, x3;

    //while loop for user interaction of choice selection
    while(x==1){
        cout << "Enter loan amount: ";
        cin >> month;
        cout << "Enter interest rate: ";
        cin >> intRate;
        cout << "Enter terms: ";
        cin >> term;

        //calculate function runned
        payment(month, intRate, term, x1, x2, x3);


        //final output
        cout << "Monthly payment is: " << x1 << endl;
        cout << "Total full payment is " << x2 << endl;
        cout << "Total interest paid is " << x3 << endl;
        
        cout << "\nDo you want to do another calculations?" << endl;
        cout << "\nEnter: 1-Yes | Other-No \n";
        cin >> x;
    }

    return 0;
}







/* //& - Reference v2
#include <iostream>
#include <cmath>

using namespace std;

bool solution(double a, double b, double c, double& s1, double& s2) {
    cout.setf(ios::fixed);
    cout.precision(2);
    double d = (b * b) - (4 * a * c);
    if (d < 0)
        return false;
    else {
        s1 = (-b + sqrt(d)) / (2 * a);
        s2 = (-b - sqrt(d)) / (2 * a);
        return true;
    }
}

int main() {
    cout << "+------------------------------+" << endl;
    cout << "|        Assignment 3.3        |" << endl;
    cout << "|     Quadratic Equation       |" << endl;
    cout << "|           Solver             |" << endl;
    cout << "+------------------------------+" << endl;

    //Data variables
    double a, b, c, x1, x2;
    cout << "Please enter the coefficients of a quadratic equation (a, b, c): " << endl;
    cin >> a >> b >> c;
    if (solution(a, b, c, x1, x2)) {
        cout << "The solutions are: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else {
        cout << "No real solution" << endl;
    }


    return 0;
}
*/


/*//& - Reference v1
#include<iostream>

using namespace std;

void swap(double &x, double &y) {
	double t;
	t = x;
	x = y;
	y = t;
}


int main() {

	cout << "+------------------------------+" << endl;
	cout << "|        Assignment 3.3        |" << endl;
	cout << "|     Mortgage Calculation     |" << endl;
	cout << "|           Program            |" << endl;
	cout << "+------------------------------+" << endl;

	//Data variable
	double a = 5, b=11;
	swap(a, b);
	cout << " The value of a is " << a << endl;
	cout << "The value of b is " << b << endl;

	return 0;
}

//NOTES:
//& - Passing by the reference
*/

