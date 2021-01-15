#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "italian");
	int modelli;
	int allestimenti;
	int costo;
	int Media = 0, MediaC;
	int nMacchine = 0;
	int a, b;
	int temp = 0, minore = 0, maggiore = 0;
	
	cout << "\nInserisci il numero di modelli di auto del consessionario ";
	cin >> modelli;

	for (int i = 0; i < modelli; i++) {
		a = i + 1;
		cout << "\nInserisci il numero di allestimenti per il modello " << a << " ";
		cin >> allestimenti;
		MediaC = 0;
		for (int ii = 0; ii < allestimenti; ii++) {
			b = ii + 1;
			cout << "\nInserire il prezzo dell'allestimento " << b << " ";
			cin >> costo;

			MediaC = costo + MediaC;
			Media = costo + Media;
			nMacchine++;

			if (temp == 0) {
				minore = costo;
				temp ++;
			}
			if (minore > costo) {
				minore = costo;
			}
			if (maggiore < costo) {
				maggiore = costo;
			}
		}
		cout << "\nLa media del prezzo di questo gruppo è " << MediaC/ allestimenti;
	}
	cout << "\nLa media complessiva del prezzo delle macchine è " << Media / nMacchine;
	cout << "\nIl prezzo minimo è " << minore;
	cout << "\nIl prezzo massimo è " << maggiore;
}
