// template is used for generic programming
// Creating reusable classes that work with different data types.
// The instances of those generic classes are called "Specialization"

#include <iostream>

using namespace std;

// This is the concrete class which we will turn into a template (generic class)
// so it can be used with float too.
class calc {
	public:
		int multiply(int x, int y);
		int add(int x, int y);
};

int calc::multiply(int x, int y) {
	return x*y;
}

int calc::add(int x, int y) {
	return x + y;
}

// How to make it work with floats too:
// So the logic is to replace the type (int) with the type variable I am defining (A_Type)
template <class A_Type> class GenericCalc {
	public:
		A_Type multiply(A_Type x, A_Type y);
		A_Type add(A_Type x, A_Type y);
};

// When defining the methods of the class out of the class body, use the entire declaration with "template"
// keyword.
template <class A_Type> A_Type GenericCalc<A_Type>::multiply(A_Type x, A_Type y) {
	return x * y;
}

template <class A_Type> A_Type GenericCalc<A_Type>::add(A_Type x, A_Type y) {
	return x + y;
}

int main() {
	GenericCalc <int> intCalc;
	cout << intCalc.add(1,1) << endl;
	cout << intCalc.multiply(10,10) << endl;

	GenericCalc <double> floatCalc;
	cout << floatCalc.add(1.0, 1.0) << endl;
	cout << floatCalc.multiply(100, 0.2) << endl;
}
