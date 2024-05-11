#include <iostream>
using namespace std;


int main() {
	int n = 0;
	for (int i = 100; i <= 999; i++) {
		int first_digit = (i / 100) % 10;
		int second_digit = (i / 10) % 10;
		int third_digit = i % 10;
		if (first_digit != second_digit && first_digit != third_digit && second_digit != third_digit) {
			n++;
		}
	}
	cout << n;
}