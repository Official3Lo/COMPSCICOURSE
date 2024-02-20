#include<iostream>
#include<iomanip>
#include<climits>

using namespace std;

int main()
{

	cout <<"+-------------------------------+\n"
		<< "|                               |\n"
		<< "|    While Loop Lab Exercises   |\n" 
		<< "|          Program		        |\n"
		<< "+-------------------------------+\n\n" << endl;
	
    int choice;
    cout << "Choose the program you want to use:\n" 
        <<"1. 50 int loop smallestNum\n"
        << "2. random loop\n"
        <<"3. Older Age ratio loop\n"
        << "4. 0-1 decimal random loop\n" << endl;
    cin >> choice;
    switch (choice) {
    case 1: { // <- Had to use curly brackets to enclosed each case due to code execution sequence order...
        //Part 1: 50 int looping smallestNum
        int zoomer = 0;
        int minNumber = INT_MAX;
        int a;
        cout << "Enter 5 integers:" << endl;
        while (zoomer < 50) {
            cin >> a;
            if (a < minNumber) {
                minNumber = a;
            }
            zoomer++;
        }
        cout << "The smallest number entered is: " << minNumber << endl;
        break;
    }

    case 2: {
        //Part 2:
        cout << "\nRandomly generating 50 integers...\n" << endl;
        int b;
        int zoomer2 = 0;
        int counter = 0;
        while (zoomer2 < 50) {
            b = rand() % 100;
            cout << b << endl;
            if (b <= 25) {
                counter++;
            }
            zoomer2++;
        }
        cout << "your total # < 25 is: " << counter << endl;
        break;
        }

    case 3: {
        //Part 3:
        int c;
        int zoomer3 = 0;
        int counter2 = 0;
        cout << "enter 20 int between 18 and 32 for age: " << endl;
        while (zoomer3 < 20) {
            cin >> c;
            if (c >= 18 && c <= 32) {
                cout << "\n^ Okay, next person.." << endl;
                if (c > 25) {
                    counter2++;
                }
            }
            else {
                cout << "error." << endl;
                //exit(0); //commented out for user exp purposes.
            }
            zoomer3++;
        }
        cout << "Okay, you got " << counter2 << " people who are over 25 in your class.\n" << endl;
        break;
    }

    case 4: {
        //Part 4:
        float x;
        int zoomer4 = 0;
        int counter3 = 0;
        int counter4 = 0;

        cout << "Generating 30 random ints between 0 & 1...\n" << endl;
        while (zoomer4 < 30) {
            int randInt = rand();
            x = rand() % 2;
            //x = static_cast<float>(randInt) / RAND_MAX; //randomizing in float int
            cout << x << endl;
            if (x < 1) {
                counter3++;
            }
            if (x ==1 && x<2) {
                counter4++;
            }
            zoomer4++;
        }
        cout << "You have: " << counter3 << " total zero numbers" << endl;
        cout << "You have: " << counter4 << " total one numbers" << endl;
        break;
    }
 }   


        cout << "\n========================\nSIT© Programming Inc.\n========================" << endl;
        return 0;
    
}