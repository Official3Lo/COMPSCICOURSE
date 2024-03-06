#include<iostream>
#include<iomanip>
#include<climits>
#include<cmath>

using namespace std;

int main()
{

	cout <<"+-------------------------------+\n"
		<< "|                               |\n"
		<< "| 2.7- Average Household Income |\n" 
		<< "|          Program		        |\n"
		<< "+-------------------------------+\n\n" << endl;
	
	//Data variable
	int x,j;
	int averageHI = 0;
	int i = 0;

	//House data option prompt
	cout << "Enter the number of houses you gathered data from: " << endl;
	cin >> j;

	//input of data
	while (i < j) {
		cout << "Please enter the house income: " << endl;
		cin >> x;
		averageHI = averageHI+x;
		i++;
	}
	
	//final calculation and output of household average income 
	averageHI = averageHI / j;

	cout << "sum of the numbers is: " << averageHI << endl;
    
  


        cout << "\n========================\nSIT© Programming Inc.\n========================" << endl;
        return 0;
    
}