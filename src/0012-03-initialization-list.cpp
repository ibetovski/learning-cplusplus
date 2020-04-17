// Using Initialization list for setting class private property
#include <iostream>

using namespace std;

class Foo {
	public:
		// this is the same as: Foo() { _blah = "dodo"; }
		Foo(): _blah("dodo") {}
		void getBlah();
	private:
	std::string _blah;
};

void Foo::getBlah() {
	cout << _blah;
}

// for more fields:
class Bar {
	public:
		Bar(): _blah1("dodo1"), _koko("dodo2") {}
	private:
	std::string _koko;
	std::string _blah1;
};

// Having property name which name is the same as the constructor's argument:
class Baz {
	public:
		Baz(std::string foo): foo(foo) {}
		void getFoo();
	private:
		std::string foo;
};

void Baz::getFoo() {
	cout << "foo is: " << foo << endl;
	cout << "this->foo is: " << this->foo << endl;
}


int main() {
	Foo foo;
	foo.getBlah();
	
	Bar bar;
	Baz baz("shalalala");
	baz.getFoo();
}
	
