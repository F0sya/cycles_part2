#include <iostream>
using namespace std;

int main() {
	cout << "Welcome to a currency converter!\n\n" <<
		"Currencies:\n" <<
		"-(1)Hryvnia\n" <<
		"-(2)US Dollars\n" <<
		"-(3)Euro\n" << endl;
	int user_input = 5;
	double usd_to_uah = 39.58, usd_to_eur = 0.93, eur_to_uah = 42.70, balance;

	for (; user_input != 0;) {

		cout << "Choose a currency you want to convert: "; cin >> user_input;
		int converting_currency = user_input;
		cout << "Choose a currency you want to get: "; cin >> user_input;
		int converted_currency = user_input;
		cout << "Write an amount of money you have: "; cin >> balance;
		switch (converting_currency) 
		{
			case 1:
				switch (converted_currency)
				{
					case 1:
						cout << "You can't convert UAH to UAH" << endl;
						break;
					case 2:
						cout << balance << " UAH -->" << balance / usd_to_uah << " USD" << endl;
						break;
					case 3:
						cout << balance << " UAH -->" << balance / eur_to_uah << " EUR" << endl;
						break;
				}
				break;
			case 2:
				switch (converted_currency)
				{
				case 1:
					cout << balance << " USD -->" << balance * usd_to_uah << " UAH" << endl;
					break;
				case 2:
					cout << "You can't convert USD to USD" << endl;
					break;
				case 3:
					cout << balance << " USD -->" << balance * usd_to_eur << " EUR" << endl;
					break;
				}
				break;
			case 3:
				switch (converted_currency)
				{
				case 1:
					cout << balance << " EUR -->" << balance * eur_to_uah << " UAH" << endl;
					break;
				case 2:
					cout << balance << " EUR -->" << balance / usd_to_eur << " USD" << endl;
					break;
				case 3:
					cout << "You can't convert EUR to EUR" << endl;
					break;
				}
				break;
		}
	}
}