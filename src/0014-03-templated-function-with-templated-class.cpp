#include <iostream>

// This is interesting subject.
// When we define the template function body, we should respect it is part of a template class.
// So to make thing easies for reading (and learning) we will name the types:
// - ClassT - the type of the class
// - FuncT - the type of the function

using namespace std;

template <class ClassT> class A {
	public:
		template <class FuncT> FuncT add(FuncT x, FuncT y) {
			return x + y;
		}
		// one more templated function so we see how it is defined after the class:
		template <class FuncT> FuncT multiply(FuncT x, FuncT y);
};

template <class ClassT> // This is the class definition
	template <class FuncT> // the function definition
	// the return type...
	// then the class with it's type so we can reach the method via the class definition
	// the rest is  simple...
	FuncT A<ClassT>::multiply(FuncT x, FuncT y) {
		return x * y;
	}

int main() {
	A <int> a;
	int x = a.add<int>(2,2);
	int y = a.multiply(10,10);

	// printing the result from top. It has implicit template function invokation (no type provided)
	cout << y << endl;

	// Testing if deducing works without explicit return type. It works because of the arguments.
	cout << a.multiply(20, 20) << endl;

}
