#include <iostream>
using namespace std;

int main() {
	int A; cout << "A:"; cin >> A;

	for (int B = 1; B < A; B++) {
		if (A % (B * B) == 0 && A % (B * B * B) != 0) {
			cout << B << endl;
		}
	}
}