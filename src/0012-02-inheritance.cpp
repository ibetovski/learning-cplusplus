#include <iostream>

using namespace std;

class Foo {
	// the parent constructor expects integer as an arg
	public:
		Foo(int x) {
			cout << "Foo's constructor"
				<< " called with"
				<< x
				<< endl;
		}
};

class Bar : public Foo {
	public:
		Bar() : Foo(10) {
			cout << "Bar's constructor" << endl;
		}
};

class Dodo: public Foo {
	public:
		Dodo() : Foo(20) {}
};

int main() {
	Bar stool;
	Dodo() blah;
}
