#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

void Mathematical_Operations() {
	float v1, v2;
	char op;
	cout << "enter two numbers : ";
	cin >> v1 >> v2;
	cout << "enter an operation (+,-,*,/) : ";
	cin >> op;
	switch (op) {
	case '+': cout << v1 << " + " << v2 << " = " << v1 + v2;
		break;
	case '-': cout << v1 << " - " << v2 << " = " << v1 - v2;
		break;
	case '*': cout << v1 << " * " << v2 << " = " << v1 * v2;
		break;
	case '/': if (v2 != 0)
		cout << v1 << " / " << v2 << " = " << v1 / v2;
			else cout << "Indeterminate value";
		break;
	default: cout << "operation is not involved ";

	}

	cout << endl;

}
void  Mathematical_Functions() {
	float v1;
	cout << "pls Enter a positive number : ";
	cin >> v1;
	if (v1 > 0) {
		cout << "- Sqre ruaoot :  " << sqrt(v1) << endl;
		cout << "- Power of 2 :  " << pow(v1, 2) << endl;
		cout << "- Ceiling :  " << ceil(v1) << endl;
		cout << "- Floor :  " << floor(v1) << endl;

	}
	else cout << "a positive please !!! ";
	cout << endl;


}
void Number_Properties() {
	int v1;
	cout << "pls enter an integer : ";
	cin >> v1;
	if (v1 > 0) cout << "The number is Positive. " << endl;
	else if (v1 < 0) cout << "The number is Negative. " << endl;
	else cout << "The number is Zero.  " << endl;

	if (v1 % 2 == 0) cout << "The number is Even.  " << endl;
	else cout << "The number is Odd.  " << endl;

	bool isPrime = true;
	if (v1 <2) isPrime = false;
	for (int i = 2; isPrime && i <= v1 / 2 ; i++)
		if (v1 % i == 0) isPrime = false;
	if (isPrime) cout << "The number is Prime.  ";
	else cout << "The number isn\'t a Prime.  ";


	cout << endl;


}
void Guess_the_number() {
	int random, guess = 0, i = 1;
	random = rand() % 101; 
	cout << "take a guess : ";
	cin >> guess;
	for (; guess != random;i++) {
		cout << "try again : ";
		cin >> guess;
		if (guess > random) {
			if ((guess - random) <= 5)cout << "Very close! low a little bit  \n";
			else cout << "Too high! ";
		}
		else if (guess < random) {
			if ((random - guess) <= 5) cout << "Very close! high a little bit  \n";
			else cout << "Too low! ";
		}
	}

	cout << "You did it !!!!\n";
	cout << "Your Total trils : " << i;

	cout << endl;


}

int main() {
	char x;

	do {
		cout << endl;
		cout << "========== MATH ADVENTURE ==========\n\n\n";
		cout << "1. Basic Mathematical Operations\n";
		cout << "2. Mathematical Functions\n";
		cout << "3. Number Properties\n";
		cout << "4. Guess the Random Number\n";
		cout << "5. Exit\n";
		cin >> x;
		
		switch (x) {
		case '1': Mathematical_Operations();
			break;
		case '2': Mathematical_Functions();
			break;
		case '3':Number_Properties();
			break;
		case '4':Guess_the_number();
			break;
		case '5':
			break;
		default:cout << "its 1 , 2 , 3 , 4 or 5 !!!!!!!";
			break;

		}

	} while (x != '5');
	cout << "Thank you for using Math Adventure. Goodbye! \n";
}
