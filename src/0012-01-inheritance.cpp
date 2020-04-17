#include <iostream>

using namespace std;

class Animal {
	public:
		Animal();
		void eat();
		void sleep();
		void drink();

	private:
		int legs;
		int arms;
		int age;
};

Animal::Animal() {
	cout << "Animal contructor" << endl;
}

class Cat: public Animal {
	public:
		Cat();
		int fur_color;
		void purr();
		void fish();
		void markTerritory();
};

Cat::Cat() {
	cout << "Cat constructor" << endl;
}

int main() {
	Cat cat;
}
