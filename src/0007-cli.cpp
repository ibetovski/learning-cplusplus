#include <iostream>
#include <fstream>

using namespace std;

/**
 * This program will take a file names as an input from CLI
 * and will print it's content. Like a basic usage of "cat"
 * 
 * How it works: it prints char by char until it finishes.
 * By using cin.get();
 */
int main(int argc, char *argv[]) {
	if (argc != 2) {
		cout << "Usage: " << argv[0] << " <filename>\n";
	} else {
		ifstream the_file (argv[1]);
		if (!the_file.is_open()) {
			cout << "No such file.\n";
		} else {
			char x;
			while (the_file.get(x)) {
				cout << x;
			}
		}
	}
}
