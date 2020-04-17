#include <iostream>

using namespace std;

class Foo {
	public:
		Foo(): myInt(5) {}
		void getValue() {
			cout << myInt << endl;
		}
	private:
		int myInt;
};

int main() {
	Foo foo;
	foo.getValue();
}
