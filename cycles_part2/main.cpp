#include <iostream>
using namespace std;

int main() {
	int A; cout << "A:"; cin >> A;
	int temp = A;
	int sum = 0;
	for (; temp != 0;) {
		sum += temp % 10;
		temp /= 10;
	}

	cout << "Sum: " << sum << endl;
	cout << "A:" << A << endl;


	if ((sum * sum * sum) == (A * A)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}