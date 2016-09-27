#include <iostream>
using namespace std;

int main() {
	
	int total = 0, amount;

	cout << "Press '0' to get the running total of integers.\n\n";

	cout << "Enter an integer. ";
	cin >> amount;
	while (amount > 0) {
		cout << "Enter another integer. ";
		total = total + amount;
		cin >> amount;
	}
	cout << "The running total is " << total << endl;
	
	return 0;
}