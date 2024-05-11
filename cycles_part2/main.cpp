#include <iostream>
using namespace std;

int main() {
	int user_input; cout << "Enter a number:"; cin >> user_input;
	int reversed_num = 0;
	for (; user_input != 0;) {
		reversed_num = reversed_num * 10 + user_input % 10;
		user_input /= 10;
	}

	for (; reversed_num != 0;) {
		if (reversed_num % 10 == 3 || reversed_num % 10 == 6) {
			reversed_num /= 10;
		}
		else {
			cout << reversed_num % 10;
			reversed_num /= 10;
		}
	}
}
