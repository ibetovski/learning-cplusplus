#include <iostream>
#include <cstdarg>

using namespace std;

/**
 * The first argument is mandatory.
 * Then, the elipsis shows there are arbitrary number of arguments.
 * The example on the page: https://www.cprogramming.com/tutorial/c++-tutorial.html?inl=nv
 * uses the first argument to provide the number of arguments.
 * I will make the first argument to be included in the average
 * and the number of arguments to be calculated;
 * 
 * cheatsheet:
 * - va_list - creates the list
 * - va_start - initializes the list
 * - va_arg - gets the next argument, casting it to provided type
 * - va_end - cleans the variable used for the list storage
 *
 * EDIT: Now I understand why in the example the first argument is the count.
 * Because of the casting of `va_arg` we can not cast null ... Will try with int.
 *
 * EDIT: It didn't work with int neither. Will stick to the example ...
 *
 * EDIT: Double (as shown in the exmple) didn't work as expected neither. It prints strange double numbers
 */
double avg(int num, ...) {
	// include the first argument into the calc;
	int sum = 0;
	
	// initializing the arguments list
	va_list allArguments;

	// starts iterating and summing up, plus, increasing the count of arguments
	va_start(allArguments, num);

	for (int x = 0; x < num; x++) {
		sum += va_arg(allArguments, int);
	}

	va_end(allArguments);

	return (float) sum / num;
}

int main() {
	cout << "Average : " << avg(3, 2, 3, 4) << endl;
	cout << "Average : " << avg(6, 2, 3, 4, 2, 2, 3) << endl;
}
