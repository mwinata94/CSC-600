#include <iostream>
#include <string>
using namespace std;

class DigitToText {
public:
	DigitToText() {
		line1 = "";
		line2 = "";
		line3 = "";
		line4 = "";
		line5 = "";
		line6 = "";
		line7 = "";
	}
	string getLine1() { return line1; }
	string getLine2() { return line2; }
	string getLine3() { return line3; }
	string getLine4() { return line4; }
	string getLine5() { return line5; }
	string getLine6() { return line6; }
	string getLine7() { return line7; }
	void setLine1(string line) { line1 = line; }
	void setLine2(string line) { line2 = line; }
	void setLine3(string line) { line3 = line; }
	void setLine4(string line) { line4 = line; }
	void setLine5(string line) { line5 = line; }
	void setLine6(string line) { line6 = line; }
	void setLine7(string line) { line7 = line; }
private:
	string line1;
	string line2;
	string line3;
	string line4;
	string line5;
	string line6;
	string line7;
};

DigitToText digits[10] = {
    DigitToText(),
    DigitToText(),
    DigitToText(),
    DigitToText(),
    DigitToText(),
    DigitToText(),
    DigitToText(),
    DigitToText(),
    DigitToText(),
    DigitToText()
};

void BigInt(int);

int main() {
    digits[0].setLine1("  @@@  ");
	digits[0].setLine2(" @   @ ");
	digits[0].setLine3(" @   @ ");
	digits[0].setLine4(" @   @ ");
	digits[0].setLine5(" @   @ ");
	digits[0].setLine6(" @   @ ");
	digits[0].setLine7("  @@@  ");
	digits[1].setLine1("  @@   ");
	digits[1].setLine2(" @@@   ");
	digits[1].setLine3("@@@@   ");
	digits[1].setLine4("  @@   ");
	digits[1].setLine5("  @@   ");
	digits[1].setLine6("  @@   ");
	digits[1].setLine7("@@@@@@ ");
	digits[2].setLine1(" @@@@  ");
	digits[2].setLine2("@    @ ");
	digits[2].setLine3("    @  ");
	digits[2].setLine4("    @  ");
	digits[2].setLine5("   @   ");
	digits[2].setLine6("  @    ");
	digits[2].setLine7("@@@@@@ ");
	digits[3].setLine1(" @@@@  ");
	digits[3].setLine2("@   @@ ");
	digits[3].setLine3("    @@ ");
	digits[3].setLine4("@@@@@  ");
	digits[3].setLine5("    @@ ");
	digits[3].setLine6("@   @@ ");
	digits[3].setLine7(" @@@@  ");
	digits[4].setLine1("   @@  ");
	digits[4].setLine2("  @ @  ");
	digits[4].setLine3(" @  @  ");
	digits[4].setLine4("@@@@@@ ");
	digits[4].setLine5("    @  ");
	digits[4].setLine6("    @  ");
	digits[4].setLine7("    @  ");
	digits[5].setLine1("@@@@@@ ");
	digits[5].setLine2("@      ");
	digits[5].setLine3("@      ");
	digits[5].setLine4(" @@@@  ");
	digits[5].setLine5("     @ ");
	digits[5].setLine6("     @ ");
	digits[5].setLine7("@@@@@  ");
	digits[6].setLine1(" @@@@@ ");
	digits[6].setLine2("@      ");
	digits[6].setLine3("@      ");
	digits[6].setLine4("@@@@@  ");
	digits[6].setLine5("@    @ ");
	digits[6].setLine6("@    @ ");
	digits[6].setLine7(" @@@@  ");
	digits[7].setLine1("@@@@@@ ");
	digits[7].setLine2("     @ ");
	digits[7].setLine3("    @  ");
	digits[7].setLine4("   @   ");
	digits[7].setLine5("  @    ");
	digits[7].setLine6(" @     ");
	digits[7].setLine7("@      ");
	digits[8].setLine1("  @@@  ");
	digits[8].setLine2(" @   @ ");
	digits[8].setLine3(" @   @ ");
	digits[8].setLine4("  @@@  ");
	digits[8].setLine5(" @   @ ");
	digits[8].setLine6(" @   @ ");
	digits[8].setLine7("  @@@  ");
	digits[9].setLine1("  @@@  ");
	digits[9].setLine2(" @   @ ");
	digits[9].setLine3(" @   @ ");
	digits[9].setLine4("  @@@@ ");
	digits[9].setLine5("     @ ");
	digits[9].setLine6(" @   @ ");
	digits[9].setLine7("  @@@  ");
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
    for (int i = 0; i < count; i++) {
        cout << digits[input[i]].getLine1();
    }
    cout << endl;
    for (int i = 0; i < count; i++) {
        cout << digits[input[i]].getLine2();
    }
    cout << endl;
    for (int i = 0; i < count; i++) {
        cout << digits[input[i]].getLine3();
    }
    cout << endl;
    for (int i = 0; i < count; i++) {
        cout << digits[input[i]].getLine4();
    }
    cout << endl;
    for (int i = 0; i < count; i++) {
        cout << digits[input[i]].getLine5();
    }
    cout << endl;
    for (int i = 0; i < count; i++) {
        cout << digits[input[i]].getLine6();
    }
    cout << endl;
    for (int i = 0; i < count; i++) {
        cout << digits[input[i]].getLine7();
    }
    cout << endl;
}
