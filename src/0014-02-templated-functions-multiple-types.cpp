#include <iostream>

using namespace std;

template <class T1, class T2> T2 cast(T1 x) {
	return (T2) x;
}

int main() {
	int x = cast<int, double>(2.0);

	cout << x << endl;
}
