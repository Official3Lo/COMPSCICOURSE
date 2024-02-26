#include<iostream>
#include<iomanip>
#include<climits>

using namespace std;

int main()
{

	cout <<"+-------------------------------+\n"
		<< "|                               |\n"
		<< "|      2.6 - Find the Sum       |\n" 
		<< "|          Program		        |\n"
		<< "+-------------------------------+\n\n" << endl;
	
	int sum, a;
	sum = 0;
	int i = 0;


	while (i < 3) {
		cout << "Please enter an integer: " << endl;
		cin >> a;
		sum = sum + a;
		i++;
	}
	
	cout << "sum of the numbers is: " << sum << endl;
    
  


        cout << "\n========================\nSIT© Programming Inc.\n========================" << endl;
        return 0;
    
}
