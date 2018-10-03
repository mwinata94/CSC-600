#include <iostream>
using namespace std;

int* reduce(int[], int);

int main() {
	return 0;
}

int* reduce(int array[], int size) {
    int firstLargest = 0;
    int secondLargest = 0;
    int thirdLargest = 0;
    int firstCount = 0;
    int secondCount = 0;
    int thirdCount = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] > thirdLargest) {
            if (array[i] > secondLargest) {
                if (array[i] > firstLargest) {
                    thirdLargest = secondLargest;
                    thirdCount = secondCount;
                    secondLargest = firstLargest;
                    secondCount = firstCount;
                    firstLargest = array[i];
                    firstCount = 1;
                } else if (array[i] == firstLargest) {
                    firstCount++;
                } else {
                    thirdLargest = secondLargest;
                    thirdCount = secondCount;
                    secondLargest = array[i];
                    secondCount = 1;
                }
            } else if (array[i] == secondLargest) {
                secondCount++;
            } else {
                thirdLargest = array[i];
                thirdCount = 1;
            }
        } else if (array[i] == thirdLargest) {
            thirdCount++;
        }
    }
    int returnArray[size - firstCount - secondCount - thirdCount];
    for (int i(0), j(0); i < size; i++) {
        if (array[i] < thirdLargest) {
            returnArray[j++] = array[i];
        }
    }
    return returnArray;
}
