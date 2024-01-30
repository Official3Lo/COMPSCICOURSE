#include<iostream>

using namespace std;

int main() {
	std::cout << "^---------------------^" << endl;
	std::cout << "|    v SIT Grades v   |" << endl;
	std::cout << "X_____________________X" << endl;

	std::cout << "\n Here are Sit's grading list: "
		<< "\nA: 90 - 100.   B: 80 -89.  C: 70 - 79.  D: 60 - 69.  F: 0 - 59" << endl;
	//data variable;
	int a, b, c, d, e, f, g, h, t;
	std::cout << "\nplease enter 8 integers from 1-100: \n" << endl;
	cin >> a >> b >> c>> d >> e >> f >> g >> h;
	t = a;
	if (b < t) {
		t = b;
	}
	if (c < t) {
		t = c;
	}
	if (d < t) {
		t = d;
	}
	if (e < t) {
		t = e;
	}
	if (f < t) {
		t = f;
	}
	if (g < t) {
		t = g;
	}
	if (h < t) {
		t = h;
	}
		std::cout << "the smallest number grade is: " << t << endl;

	std::cout << "\n========================\nSIT© Programming Inc.\n========================" << endl;
	return 0;
}