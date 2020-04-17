#include <iostream>

using namespace std;

int main() {
	char string[256];
	cout<< "Please enter a long string: ";
	cin.getline(string, 256);
	cout<< "You entered: " << string << endl;
	return 0;
}
