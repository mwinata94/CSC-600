#include <iostream>
using namespace std;

int maxlen(int[], int);

int main() {
	int size = 0;
	int* array;
	cout << "Enter array size: ";
	cin >> size;
	array = new int[size];
	for (int i = 0; i < size; i++) {
		cout << "Enter element #" << i + 1 << ":";
		cin >> array[i];
	}
	cout << "maxlen: " << maxlen(array, size) << endl;
	delete array;
	return 0;
}

int maxlen(int array[], int size) {
	if ( 0 == size ) {
		return size;
	} else {
		int integer = array[0];
		int counter = 0;
		int maxlen = 0;
		for (int i = 0; i < size; i++) {
			if ( integer == array[i] ) {
				counter++;
			} else { 
				if ( maxlen < counter ) {
					maxlen = counter;
				}
				counter = 1;
				integer = array[i];
			}
		}
		if ( maxlen < counter ) {
			return counter;
		} else {
			return maxlen;
		}
	}
}