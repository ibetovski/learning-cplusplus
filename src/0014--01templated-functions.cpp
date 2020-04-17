// The invoking could be without the type notation for templates because
// the arguments are the same type as the return.
// The compuler is pretty smart about it
#include <iostream>

using namespace std;

template <class T> T add(T x, T y) {
	return x + y;
}

int main() {
	// no template type notation
	int x = add(1,1);
	// there is an explicit template type notation
	int y = add<int>(2,2);

	cout << x << endl;
	cout << y << endl;
}

