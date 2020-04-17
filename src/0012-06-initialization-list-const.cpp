#include <iostream>

using namespace std;

class A {
	public:
		A(): _constant(1) {};
		void getConst() {
			cout << _constant << endl;
			cout << _blah << endl;
		}
	private:
		const int _constant;
		const int _blah = 2;
};

int main() {
	A a;
	a.getConst();
}
