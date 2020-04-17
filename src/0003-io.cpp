#include <fstream>
#include <iostream>

using namespace std;

int main() {
	char wstr[50];
	char rstr[50];

	ofstream a_file ("tmp_generated_file.txt", ios::app); // by default will truncate the file. ios::app will append
	cout<<"Write something in the file\n";
	cin.getline(wstr, 50);

	a_file << wstr;
	a_file.close();

	ifstream b_file ("tmp_generated_file.txt");

	if (b_file.is_open()) {
		b_file >> rstr; // this doesn't work as I expected. It cuts the string on the first blank space
		cout<< "The content of the file is:\n";
		cout<<rstr<<endl;
	} else {
		cout<< "The file can not be open. Quiting..."<<endl;
	}

	cin.get(); // waiting for keypress to close.
	// b_file will close implicitly/automatically
}
