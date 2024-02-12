#include<iostream>

using namespace std; //although I was using standard, code was bugging so i had to resort to adding std cmt.

int main() {
	std::cout << "X=====================X" << endl;
	std::cout << "|     > SIT Quiz <    |" << endl;
	std::cout << "X=====================X" << endl;

	//data variable;
	double points = 0;
	int choice;
	char answer;

	std::cout << "\n Hello you have: "<< points
		<< " points at the moment. Would you like to take a quiz to boost your score?\n" 
		<< "\nPick your question selection: "
		<< "\n-------------------------------------"
		<<"\n1. Quiz4Pts\n2. Big Int\n3. Silly ?" << endl;

	//Switch-Case Programs
	cin >> choice;

	switch (choice) {
	//Program 1
	case 1: 
		std::cout << "1) What is the value of the following boolean expression: 5!=5?"
			<< "\na) 5   b) 1   c) 0   d) 10" << endl;
		cin >> answer;
		if (answer == 'c') {
			std::cout << "*Correct, transferring credit to your account.*" << endl;
			points++;
		}
		else {
			std::cout << "wrong answer.";
		}
		std::cout << "2) What is the value of 12%6? "
			<< "\na) 0   b) 2   c) 12   d) 6" << endl;
		cin >> answer;
		if (answer == 'a') {
			std::cout << "*Correct, transferring credit to your account.*" << endl;
			points++;
		}
		else {
			std::cout << "wrong answer.";
		}
		std::cout << "3) What is the best music genre? (bias incoming.) "
			<< "\na) EDM   b) rap   c) rock   d) pop" << endl;
		cin >> answer;
		if (answer == 'a') {
			std::cout << "*Correct, transferring credit to your account.*" << endl;
			points++;
		}
		else {
			std::cout << "wrong answer.";
		}
		std::cout << "4) Who was the main character of Supernatural? "
			<< "\na) Sam   b) Dean   c) Castiel   d) God" << endl;
		cin >> answer;
		if (answer == 'd') {
			std::cout << "*Correct, transferring credit to your account.*" << endl;
			points++;
		}
		else {
			std::cout << "wrong answer.";
		}
		std::cout << "\nYou have a total of: " << points << " points" << endl;
		break;

	//Program 2
	case 2:
		int a, b, c, t;
		std::cout << "please enter 3 integers:" << endl;
		cin >> a >> b >> c;
		t = a;
		if (b > t) {
			t = b;
		}
		if (c > t) {
			t = c;
		}
		std::cout << "the largest number is: " << t << endl;
		break;

	//Program 3
	case 3:
		char ans;
		std::cout << "Can you ride a bicycle to get to the moon" << endl;
		cin >> ans;
		if (ans == 'y') {
			std::cout << "Anything is possible!" << endl;
		}
		if (ans == 'n') {
			std::cout << "You cannot complete a marathon in 10 minutes." << endl;
		}
		else {
			std::cout << "Error! Shutting down." << endl;
		}
		break;

	default:
		std::cout << "Invalid choice.\n";
	}

	std::cout << "\n========================\nSIT© Programming Inc.\n========================" << endl;
	return 0;
}
