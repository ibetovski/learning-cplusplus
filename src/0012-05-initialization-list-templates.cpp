#include <iostream>

using namespace std;

template <class T>
class MyTemplate {
	public:
		MyTemplate(T bar) : _bar(bar) {}
	private:
		T _bar;
};

int main() {
	MyTemplate <int> blah(5);
}
