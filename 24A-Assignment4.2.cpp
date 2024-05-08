


/*
#include<iostream>
#include<ctime>
#include<cmath>
#include<random>
#include"Bag.h"

using namespace std;

int main() {
	//Data variable
	Bag myInventory;

	//For-loop for adding nums randomly
	for (int i = 0; i < 80; i++) {
		myInventory.add(rand() % 100);
	}

	//Output for the random nums
	cout << "Initial items in bag" << endl;
	myInventory.display();


	//Display minimum and maximum value & index
	int min = myInventory.getMin();
	int max = myInventory.getMax();
	cout << "Lowest number in the inventory: " << min << endl;
	cout << "Highest number in the inventory: " << max << endl;

	cout << "Index of lowest value: " << myInventory.findIndex(min) << endl;
	cout << "Index of highest value: " << myInventory.findIndex(max) << endl;

	myInventory.remove(max);
	myInventory.remove(min);

	//Final data output
	double aver = myInventory.getSum() / 78;
	cout << "Average of remain items: " << aver << endl;

	return 0;
}
*/