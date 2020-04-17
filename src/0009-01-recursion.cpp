#include <iostream>

using namespace std;

void printnum(int begin) {
	cout << begin;
	if (begin < 9) {
		printnum(begin + 1);
	}
	cout << begin;
}

int main() {
	printnum(1);
}
