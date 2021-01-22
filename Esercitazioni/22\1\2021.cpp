#include <iostream>

using namespace std;

int somma() {
	int i, a=0, b=0;
	cout << "Quanti numeri vuoi inserire?\n";
	cin>> i;

	for (i; i > 0; i--) {
		cout << "inserire numero ";
		cin >> a;
		b = a + b;
		a = 0;
	}
	cout << "La somma di questi numeri è " <<b;
	return 0;
}

int prodotto() {
	int i, a = 1, b = 1;
	cout << "Quanti numeri vuoi inserire?\n";
	cin >> i;

	for (i; i > 0; i--) {
		cout << "inserire numero ";
		cin >> a;
		b = a * b;
		a = 1;
	}
	cout << "Il prodotto di questi numeri è " << b;
	return 0;

}

int minimo() {
	int i, a = 0, min = 0, temp=0;
	cout << "Quanti numeri vuoi inserire?\n";
	cin >> i;
	for (i; i > 0; i--) {
		cout << "inserire numero ";
		cin >> a;
		if (temp == 0) {
			min = a;
			temp++;
		}
		if (min > a) {
			min = a;
		}
	}
	cout << "Il minimo di questi numeri è " << min;
	return 0;
}

int main() {
	int a;
	cout << "inserisci cosa fare\n";
	cout << "1 Somma N numeri\n";
	cout << "2 Minimo N numeri\n";
	cout << "3 Prodotto N numeri\n";
	cin >> a;
	switch (a)
	{
	case 1:
		somma();
		break;
	case 2:
		minimo();
		break;
	case 3:
		prodotto();
		break;
	}
}
