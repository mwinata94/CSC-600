#include <iostream>
using namespace std;

int maxlen(int[], int);

int main() {
	int size = 0;
	int* array;
	do {
		cout << "Enter array size (must be positive): ";
		cin >> size;
	} while ( size <= 0 );
	array = new int[size];
	for (int i = 0; i < size; i++) {
		cout << "Enter element #" << i + 1 << ":";
		cin >> array[i];
	}
	cout << "maxlen: " << maxlen(array, size) << endl;
	delete array;
	return 0;
}

int maxlen(int array[], int size) {           // Function definition
    if ( 1 == size ) {                        // If size is 1, then there's no need to iterate through the array
        return size;                          // maxlen is 1 if size of array is 1
    } else {                                  // else iterate through the array to find maxlen
        int count = 1;                        // counter is set to one since the first element is counted
        int maxlen = 0;                       // maxlen is set to the default value 0
        for (int i = 1; i < size; i++) {      // Iterate through the array from the second element since the first element is already counted
            if ( array[i - 1] == array[i] ) { // If the element is in sequence
                count++;                      // Increment the counter
            } else {                          // else
                if ( maxlen < count ) {       // If counter is larger than maxlen
                    maxlen = count;           // assign counter to maxlen
                }                             // End if
                count = 1;                    // Assign counter to 1 since the first element of the new sequence is counted
            }                                 // End if
        }                                     // End of iteration
        if ( maxlen < count ) {               // If the last sequence count is larger than max len
            return count;                     // Return counter
        } else {                              // Else
            return maxlen;                    // Return maxlen
        }                                     // End if
    }                                         // End else
}                                             // End function
