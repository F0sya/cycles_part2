#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {
	srand(time(0));

	clock_t start, end;
	int n, guess;
	n = rand() % 500 + 1;
	start = clock();
	
	guess = 0;
	for (int i = 1; guess != n; i++) {
		cout << "Enter your guess:"; cin >> guess;
		(guess < n) ? cout << "Bigger!" << endl : cout << "Less!" << endl;
		if (guess == n) {
			cout << "\nCongrats! You won!\n" <<
				"Attempts: " << i << endl;
			break;
		}
	}
	end = clock();

	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	cout << "Time taken by program is : " << time_taken;
	cout << " sec " << endl;
}