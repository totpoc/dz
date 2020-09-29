#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int balance=0;
	string x;
	cin >> x;
	for (int i = 0; i < x.length(); i++)
	{
		if (x[i] == '{')
			balance += 1;
		if (x[i] == '}')
			balance -= 1;
	}
	if (balance == 0)
		cout << "Баланс соблюден";
	else
		cout << "Баланс не соблюден";
	return 0;
}