#include <iostream>

using namespace std;

void printAllChars();

int main() {
	// c-style cast:
	cout << (char) 65 << endl;
	// fnction-style cast:
	cout << char (65) << endl;
	// named cast:
	cout << static_cast<char> (65) << endl;
	// Interpretting 65 as a character not a number, will convert it to A in ASCII
	printAllChars();

	cout << 3/5 << endl;
	cout << (float)3/5 << endl; // casting only the fist number
	cout << 3/(float)5 << endl; // casting only the second number
	cin.get();
}

void printAllChars() {
	for (int x = 0; x < 128; x++) {
		cout << x << "\t" << (char) x << endl;
	}
	cout << endl;
}
