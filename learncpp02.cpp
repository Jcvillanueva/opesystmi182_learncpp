#include <iostream>
using namespace std;

int main(){

	int number;
	cout << "Enter a Number: ";
	cin >> number;

	if (number >0)
	{
	cout << "You entered a positive Number:" << number << endl;
	}

	else (number <0);
	{
	cout << " You entered a Negative number:" << number << endl;
	}

	cout << "This state is always executed so you have no choice" << endl;
	return 0;
}
