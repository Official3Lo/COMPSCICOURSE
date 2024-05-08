


/*
#ifndef Bag_h
#define Bag_h

#include<iostream>
#include<algorithm>

using namespace std;

class Bag {
private:
	int items[100];
	int itemCount;
public:
	Bag();
	int getItemCount();
	void add(int newItem);
	void display();
	bool contains(int anItem);
	bool remove(int anItem);
	int getSum();
	int getMax();
	int getMin();
	int findIndex(int anItem) const;
};

Bag::Bag() {
	itemCount = 0;
}

int Bag::getItemCount()
{
	return itemCount;
}

void Bag::add(int newItem) {
	items[itemCount] = newItem;
	itemCount++;
}

void Bag::display() {
	for (int i = 0; i < itemCount; i++) {
		cout << items[i] << endl;
	}
}

bool Bag::contains(int anItem) {
	for (int i = 0; i < itemCount; i++) {
		if (items[i] == anItem)
			return true;
	}
	return false;
}

bool Bag::remove(int anItem) {
	if (itemCount == 0) {
		return false;
		cout << "item not in bag, removal failed. \n";
	}
	else {
		int index = 0;
		for (int i = 0; i < itemCount; i++) {
			if (items[i] == anItem) {
				index = i;
				for (int k = index; k < itemCount - 1; k++) {
					items[k] = items[k + 1];
				}
				itemCount--;
				return true;
			}
		}
	}
}

int Bag::getSum() {
	int s = 0;
	for (int i = 0; i < itemCount; i++) {
		s += items[i];
		return s;
	}
}

int Bag::getMax() {
	int max = 0;
	for (int i = 0; i < itemCount; i++) {
		if (items[i] > max) {
			max = items[i];
		}
	}
	return max;
}

int Bag::getMin() {
	int min = 0;
	for (int i = 0; i < itemCount; i++) {
		if (items[i] < min) {
			min = items[i];
		}
	}
	return min;
}

int Bag::findIndex(int anItem) const {
	for (int i = 0; i < itemCount; i++) {
		if (items[i] == anItem) {
			return i;
		}
	}
	return -1;
}


#endif
*/