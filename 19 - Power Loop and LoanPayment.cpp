#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main() {
    cout << "][========================][" << endl;
    cout << "||     Loop Statement     ||" << endl;
    cout << "||        Program         ||" << endl;
    cout << "||       |_(^_^)_/        ||" << endl;
    cout << "][========================][" << endl;

    //data var
    int a, b, choice = 0;
    int term;
    double interestRate = 0, loanAmount = 0;
    double x = 0, y = 0, z = 0;
    double totalInterestPaid = 0;

    //do while-loop
    do {
        cout << "\n\nProgram Option: \n" << endl;
        cout << "-------------------\n" << endl;
        cout << "1.a-b Power Loop \n" << endl;
        cout << "2.Loan Payment Calculator \n" << endl;
        cout << "3.exit \n" << endl;
        cout << "-------------------\n" << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            //data entry input
            cout << "Enter 2 integers: \n";
            cin >> a >> b;
            for (int i = a; i <= b; i++) {
                cout << "\nPower converting...\n";
                x = pow(i, 3);
                cout << i << " to the power of 3 is -> " << x;
            }
            break;

        case 2:
            //Data input
            cout << "Enter the interest rate: ";
            cin >> interestRate;
            cout << "Enter the loan amount: ";
            cin >> loanAmount;
            //cout << "Enter the term: ";
            //cin >> term;

            cout << left << setw(10) << "Term" << setw(20) << "Monthly Payment" << setw(25) << "Total Interests Paid" << endl;
            cout << "---------------------------------------------------------" << endl;
            for (term = 1; term <= 5; term++) {
                // Total calculation and output || Step 7
                x = pow((1 + interestRate / 1200), -12 * term);
                y = interestRate / 1200;
                z = (1 - x) / y;

                // Monthly payment output
                cout.setf(ios::fixed);
                cout.precision(2);
                cout << left << setw(2) << "year " << setw(10) << term;
                cout << setw(1) << "$" << setw(19) << loanAmount / z;

                // Total interests paid calculation and output
                double totalInterestPaid = (term * 12 * (loanAmount / z)) - loanAmount;
                cout.setf(ios::fixed);
                cout.precision(2);
                cout << setw(1) << "$" << setw(1) << totalInterestPaid << endl;
            }
            break;

        case 3:
            cout << "You chose to exit the program";
            break;

        default:
            cout << "Invalid choice. Please enter a number between 1 and 3." << endl;
        };
    } while (choice != 3);

    cout << "\n========================\nSIT© Programming Inc.\n========================\n" << endl;
    return 0;
}