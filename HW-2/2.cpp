#include <iostream>
#include <string>
using namespace std;

string digits[10][7];

void BigInt(int);

int main() {
    digits[0][0] = "  @@@  ";
	digits[0][1] = " @   @ ";
	digits[0][2] = " @   @ ";
	digits[0][3] = " @   @ ";
	digits[0][4] = " @   @ ";
	digits[0][5] = " @   @ ";
	digits[0][6] = "  @@@  ";
	digits[1][0] = "  @@   ";
	digits[1][1] = " @@@   ";
	digits[1][2] = "@@@@   ";
	digits[1][3] = "  @@   ";
	digits[1][4] = "  @@   ";
	digits[1][5] = "  @@   ";
	digits[1][6] = "@@@@@@ ";
	digits[2][0] = " @@@@  ";
	digits[2][1] = "@    @ ";
	digits[2][2] = "    @  ";
	digits[2][3] = "    @  ";
	digits[2][4] = "   @   ";
	digits[2][5] = "  @    ";
	digits[2][6] = "@@@@@@ ";
	digits[3][0] = " @@@@  ";
	digits[3][1] = "@   @@ ";
	digits[3][2] = "    @@ ";
	digits[3][3] = "@@@@@  ";
	digits[3][4] = "    @@ ";
	digits[3][5] = "@   @@ ";
	digits[3][6] = " @@@@  ";
	digits[4][0] = "   @@  ";
	digits[4][1] = "  @ @  ";
	digits[4][2] = " @  @  ";
	digits[4][3] = "@@@@@@ ";
	digits[4][4] = "    @  ";
	digits[4][5] = "    @  ";
	digits[4][6] = "    @  ";
	digits[5][0] = "@@@@@@ ";
	digits[5][1] = "@      ";
	digits[5][2] = "@      ";
	digits[5][3] = " @@@@  ";
	digits[5][4] = "     @ ";
	digits[5][5] = "     @ ";
	digits[5][6] = "@@@@@  ";
	digits[6][0] = " @@@@@ ";
	digits[6][1] = "@      ";
	digits[6][2] = "@      ";
	digits[6][3] = "@@@@@  ";
	digits[6][4] = "@    @ ";
	digits[6][5] = "@    @ ";
	digits[6][6] = " @@@@  ";
	digits[7][0] = "@@@@@@ ";
	digits[7][1] = "     @ ";
	digits[7][2] = "    @  ";
	digits[7][3] = "   @   ";
	digits[7][4] = "  @    ";
	digits[7][5] = " @     ";
	digits[7][6] = "@      ";
	digits[8][0] = "  @@@  ";
	digits[8][1] = " @   @ ";
	digits[8][2] = " @   @ ";
	digits[8][3] = "  @@@  ";
	digits[8][4] = " @   @ ";
	digits[8][5] = " @   @ ";
	digits[8][6] = "  @@@  ";
	digits[9][0] = "  @@@  ";
	digits[9][1] = " @   @ ";
	digits[9][2] = " @   @ ";
	digits[9][3] = "  @@@@ ";
	digits[9][4] = "     @ ";
	digits[9][5] = " @   @ ";
	digits[9][6] = "  @@@  ";
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
            cout << digits[input[j]][i];
        }
        cout << endl;
    }
}
