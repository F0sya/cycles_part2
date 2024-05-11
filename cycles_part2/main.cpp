#include <iostream>
using namespace std;

int main() {
	int A; cout << "A:"; cin >> A;
	int B; cout << "B:"; cin >> B;
	int stop;
	(A < B) ? stop = A : stop = B;

	for (int i = 1; i <= stop; i++) {
		if (A % i == 0 && B % i == 0) {
			cout << i << " ";
		}
	}
}