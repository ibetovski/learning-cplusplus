#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char firstname[50];
	char lastname[50];
	char fullname[50]; // enough space to hold both names

	cout<< "Please enter your first name: ";
	cin.getline(firstname, 50);
	if (strcmp(firstname, "Iliyan") == 0) {
		cout<<"That's my name too!\n";
	} else {
		cout<<"Nahhh. this is not my name\n";
	}

	cout<<"Your name is of "<< strlen(firstname) << " characters.\n";
	cout<<"Now. Enter your last name, Pleasssseeee: ";
	cin.getline(lastname, 50);
	fullname[0] = '\0'; // strcat appends only after \n
	strcat(fullname, firstname);
	strcat(fullname, " ");
	strcat(fullname, lastname);
	cout<< "So your full name is: " << fullname << endl;
	return 0;
}
