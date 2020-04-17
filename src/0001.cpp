#include <iostream>

using namespace std;

int multi(int x, int y);

struct database {
	int id_number;
	int age;
	float salary;
};

struct xampl {
	int x;
};

int examplearray[100];
char astring[100];
int twodimensionalarray[8][8];



int workingWithArrays() {
	int x;
	int y;
	int arr[8][8];

	for (x = 0; x < 8; x++) {
		for (y = 0; y < 8; y++) {
			arr[x][y] = x * y;
		}
	}
	cout << "Array Indeces:\n";
	for (x = 0; x < 8; x++) {
		for (y = 0; y < 8; y++) {
			cout << "["<<x<<"]["<<y<<"]="<< arr[x][y]<<" ";
		}
		cout << "\n";
	}
	
	// Pointer to an array does not require "&" operator
	char *ptr;
	char str[40];
	ptr = str;

	return 1;
}

int main() {
	int x, y;
	int *p;
	p = &x;

	int *ptr = new int;
	delete ptr;

	database employee;

	employee.id_number = 1;
	employee.age = 32;
	employee.salary = 300.00;

	xampl structure;
	xampl *anotherPointer;

	structure.x = 32;
	anotherPointer = &structure;


	cout<<"Please input 2 numbers: ";
	cin>> x >> y;
	cin.ignore();
	cout<< "The prodcut of your numbers is: " << multi(*p, y) << "\n";
	cout<< "Pointer from new space: " << ptr << "\n";
	cout<< "Pointer: " << p << "\n";

	cout << "Age is: " << employee.age << "\n";
	cout<< anotherPointer->x << "\n";

	workingWithArrays();

	cin.get();
}

int multi(int x, int y) {
	return x * y;
}

