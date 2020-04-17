#include <iostream>

// This exaample can not be compiled because if we provoke error to be thrown
// in the initialization list, we should not define _blah anywhere. Which leads to compile error
// not a runtime_error.

using namespace std;

class A {
	public:
		A() try: _blah("koko") {}
		catch (...) {
			std::cerr << "Blah. Failed." << endl;
		}
};

int main() {
	A a;
}
