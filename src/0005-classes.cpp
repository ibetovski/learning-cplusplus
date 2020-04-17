#include <iostream>

using namespace std;

/**
 * The class definition holds only function "prototypes" and encapsulation rules.
 * The rest (methods bodies) are defined after we close the class definition
 * The properties inside are not accessed via "this". Just local variables.
 */

class Computer {
	public:
		// Constructor:
		Computer();
		// Deconstructor:
		~Computer();
		void setspeed(int p);
		int getspeed();
	protected:
		int processorspeed;
};

// Method definitions are after the class definition:
Computer::Computer() {
	processorspeed = 0;
}

Computer::~Computer() {
	// nothing here.
}

void Computer::setspeed(int p) {
	processorspeed = p;
}

int Computer::getspeed() {
	return processorspeed;
}

int main() {
	// no "new" keyword:
	Computer computer;
	computer.setspeed(200);
	cout << "Comuter speed is: " << computer.getspeed() << endl;
}

