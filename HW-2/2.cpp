#include <iostream>
#include <string>
using namespace std;

class DigitToText {
public:
	DigitToText() {
	}
	string getLine( int i ) { return line[i]; }
	void setLine( string newLine, int i ) { line[i] = newLine; }
private:
	string line[7];
};

DigitToText digits[10];

void BigInt(int);

int main() {
    digits[0].setLine("  @@@  ", 0);
	digits[0].setLine(" @   @ ", 1);
	digits[0].setLine(" @   @ ", 2);
	digits[0].setLine(" @   @ ", 3);
	digits[0].setLine(" @   @ ", 4);
	digits[0].setLine(" @   @ ", 5);
	digits[0].setLine("  @@@  ", 6);
	digits[1].setLine("  @@   ", 0);
	digits[1].setLine(" @@@   ", 1);
	digits[1].setLine("@@@@   ", 2);
	digits[1].setLine("  @@   ", 3);
	digits[1].setLine("  @@   ", 4);
	digits[1].setLine("  @@   ", 5);
	digits[1].setLine("@@@@@@ ", 6);
	digits[2].setLine(" @@@@  ", 0);
	digits[2].setLine("@    @ ", 1);
	digits[2].setLine("    @  ", 2);
	digits[2].setLine("    @  ", 3);
	digits[2].setLine("   @   ", 4);
	digits[2].setLine("  @    ", 5);
	digits[2].setLine("@@@@@@ ", 6);
	digits[3].setLine(" @@@@  ", 0);
	digits[3].setLine("@   @@ ", 1);
	digits[3].setLine("    @@ ", 2);
	digits[3].setLine("@@@@@  ", 3);
	digits[3].setLine("    @@ ", 4);
	digits[3].setLine("@   @@ ", 5);
	digits[3].setLine(" @@@@  ", 6);
	digits[4].setLine("   @@  ", 0);
	digits[4].setLine("  @ @  ", 1);
	digits[4].setLine(" @  @  ", 2);
	digits[4].setLine("@@@@@@ ", 3);
	digits[4].setLine("    @  ", 4);
	digits[4].setLine("    @  ", 5);
	digits[4].setLine("    @  ", 6);
	digits[5].setLine("@@@@@@ ", 0);
	digits[5].setLine("@      ", 1);
	digits[5].setLine("@      ", 2);
	digits[5].setLine(" @@@@  ", 3);
	digits[5].setLine("     @ ", 4);
	digits[5].setLine("     @ ", 5);
	digits[5].setLine("@@@@@  ", 6);
	digits[6].setLine(" @@@@@ ", 0);
	digits[6].setLine("@      ", 1);
	digits[6].setLine("@      ", 2);
	digits[6].setLine("@@@@@  ", 3);
	digits[6].setLine("@    @ ", 4);
	digits[6].setLine("@    @ ", 5);
	digits[6].setLine(" @@@@  ", 6);
	digits[7].setLine("@@@@@@ ", 0);
	digits[7].setLine("     @ ", 1);
	digits[7].setLine("    @  ", 2);
	digits[7].setLine("   @   ", 3);
	digits[7].setLine("  @    ", 4);
	digits[7].setLine(" @     ", 5);
	digits[7].setLine("@      ", 6);
	digits[8].setLine("  @@@  ", 0);
	digits[8].setLine(" @   @ ", 1);
	digits[8].setLine(" @   @ ", 2);
	digits[8].setLine("  @@@  ", 3);
	digits[8].setLine(" @   @ ", 4);
	digits[8].setLine(" @   @ ", 5);
	digits[8].setLine("  @@@  ", 6);
	digits[9].setLine("  @@@  ", 0);
	digits[9].setLine(" @   @ ", 1);
	digits[9].setLine(" @   @ ", 2);
	digits[9].setLine("  @@@@ ", 3);
	digits[9].setLine("     @ ", 4);
	digits[9].setLine(" @   @ ", 5);
	digits[9].setLine("  @@@  ", 6);
	int input;
	do {
        cout << "Enter a positive integer: ";
        cin >> input;
	} while( input <= 0 );
	BigInt(input);
	return 0;
}

void BigInt(int integer) {
    int count = 0;
    int integerTemp = integer;
    for (; integerTemp != 0; integerTemp /= 10) {
        count++;
    }
    int input[count];
    integerTemp = integer;
    for (int i = 0; i < count; i++) {
        input[count - i - 1] = integerTemp % 10;
        integerTemp /= 10;
    }
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < count; j++) {
            cout << digits[input[j]].getLine(i);
        }
        cout << endl;
    }
}
