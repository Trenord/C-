#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>

using namespace std;

int ordinaa(int x, int a[]) {//ordina un array passato in argomento
	float temp;
	for (int i = 0; i < x; i++) {
		for (int j = i + 1; j < 10; j++)
		{
			if (a[j] < a[i]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	return *a;//return array ordinato
}

int min(int a[], int x) {//passando un array restituisce il float minimo di quell'array
	float min = 0, temp = 0;
	for (int i = 0; i < x; i++) {
		if (temp == 0) {
			min = a[i];
			temp++;
		}
		else {
			if (min > a[i]) {
				min = a[i];
			}
		}
	}
	return min;
}

int max(int a[], int x) {//passando un array restituisce il float massimo di quell'array
	float max = 0;
	for (int i = 0; i < x; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	return max;
}

//npari e ndispari tengono il conto dei numeri pari e dispari
int npari = 0;
int ndispari = 0;

int pariF(int c[], int d[], int n, int pari[]) {
	int m = 0;
	for (int ii = 0; ii < n; ii++) {//divide i numeri pari dagli array e li mette nel'array dei pari 
		m = c[ii] % 2;//m = fmod(s1[ii],2);
		if (m == 0) {
			pari[npari] = c[ii];
			npari++;// conta il numero di pari
		}
		m = d[ii] % 2;//m = fmod(s2[ii], 2); 
		if (m == 0) {
			pari[npari] = d[ii];
			npari++;
		}

	}
	return *pari;//Restituisce pari[] con dentro tutti i numeri pari degli array
}
int dispariF(int a[], int b[], int n, int dispari[]) {
	int m = 0;
	for (int ii = 0; ii < n; ii++) {
		m = a[ii] % 2;//m = fmod(s1[ii], 2);
		if (m != 0) {
			dispari[ndispari] = a[ii];
			ndispari++;
		}
		m = b[ii] % 2;//m = fmod(s2[ii], 2);
		if (m != 0) {
			dispari[ndispari] = b[ii];
			ndispari++;
		}

	}
	return *dispari;//Restituisce dispari[] con dentro tutti i numeri dispari degli array s1, s2, d1, d2 e conta quanti sono i totale
}

int main() {
	int a[10], b[10], aa[10], bb[10];
	int s1[10], d1[10], s2[10], d2[10], n = 10;
	int x = 10;
	int scelta = 0;

	//Crea due array per contenere i dispari e i pari
	int dispari[20];
	int pari[20];
	srand(time(0));
	do {
		cout << "Inserire 0 per array random e 1 per array inseriti manualmente " << endl;
		cin >> scelta;
	} while (scelta < 0 or scelta>1);

	if (scelta == 0) {
		for (int i = 0; i < n; i++) {//random di due array
			a[i] = rand();
			b[i] = rand();
		}


		//ordina tutti gli array
		ordinaa(x, a);
		ordinaa(x, b);


		cout << endl;
		//stampa tutti gli array ordinati
		for (int i = 0; i < n; i++) {
			cout << "Array 1 ordinato " << a[i] << endl;

		}
		cout << endl;
		for (int i = 0; i < n; i++) {
			cout << "Array 2 ordinato " << b[i] << endl;
		}

		//Somma e divide il primo array random con il secondo random e fa la stessa cosa con gli array inseriti dall'utente
		for (int i = 0; i < n; i++) {
			s1[i] = a[i] + b[i];
			d1[i] = a[i] - b[i];
		}

		cout << endl;
		//stampa gli array sommati e divisi non ordinati
		for (int i = 0; i < n; i++) {
			cout << "Somma " << s1[i] << endl;
		}
		cout << endl;
		for (int i = 0; i < n; i++) {
			cout << "Sottrazione " << d1[i] << endl;
		}

		//stampa il minimo e il massimo degli array sommati e divisi
		cout << endl << "Il numero minimo dell'array sommati è " << min(s1, x) << " e il massimo è " << max(s1, x);
		cout << endl << "Il numero minimo dell'array sottratti è " << min(d1, x) << " e il massimo è " << max(d1, x);
		cout << endl;



		dispariF(s1, d1, x, dispari);//Restituisce l'array dispari[] con dentro tutti i numeri dispari degli array sommati e divisi
		pariF(s1, d1, x, pari);//Restituisce l'array pari[] con dentro tutti i numeri pari degli array sommati e divisi
		
		cout << endl << endl << "Numeri Pari" << endl;//stampa i nuemeri pari e i dispari
		for (int i = 0; i < npari; i++) {
			cout << pari[i] << endl;
		}
		cout << endl << endl << "Numeri Dispari" << endl;
		for (int i = 0; i < ndispari; i++) {
			cout << dispari[i] << endl;
		}
		cout << endl << "Ci sono " << npari << " numeri pari e " << ndispari << " dispari" << endl;// stampa il numero dei pari e dei dispari

	}
	else {

		for (int i = 0; i < n; i++) {
			cout << "Inserire elemento " << i << " del primo array ";//chiede di inserire i numeri di due array 
			cin >> aa[i];
		}
		cout << endl;
		for (int i = 0; i < n; i++) {
			cout << "Inserire elemento " << i << " del secondo array ";
			cin >> bb[i];
		}

		ordinaa(x, aa);
		ordinaa(x, bb);
		cout << endl;

		for (int i = 0; i < n; i++) {
			cout << "Array ordinato " << aa[i] << endl;
		}
		cout << endl;
		for (int i = 0; i < n; i++) {
			cout << "Array ordinato " << bb[i] << endl;
		}

		//Somma e divide il primo array con il secondo 
		for (int i = 0; i < n; i++) {
			s2[i] = aa[i] + bb[i];
			d2[i] = aa[i] - bb[i];
		}

		cout << endl;
		//stampa gli array sommati e divisi non ordinati
		for (int i = 0; i < n; i++) {
			cout << "Somma " << s2[i] << endl;
		}
		cout << endl;
		for (int i = 0; i < n; i++) {
			cout << "Sottrazione " << d2[i] << endl;
		}
		//stampa il minimo e il massimo degli array sommati e divisi
		cout << endl << "Il numero minimo dell'array sommati è " << min(s2, x) << " e il massimo è " << max(s2, x);
		cout << endl << "Il numero minimo dell'array sottratti è " << min(d2, x) << " e il massimo è " << max(d2, x);
		cout << endl;

		pariF(s2, d2, x, pari);//Restituisce l'array pari[] con dentro tutti i numeri pari degli array sommati e divisi
		dispariF(s2, d2, x, dispari);//Restituisce l'array dispari[] con dentro tutti i numeri dispari degli array sommati e divisi
		cout << endl << endl << "Numeri Pari" << endl;//stampa i nuemeri pari e i dispari
		for (int i = 0; i < npari; i++) {
			cout << pari[i] << endl;
		}
		cout << endl << endl << "Numeri Dispari" << endl;
		for (int i = 0; i < ndispari; i++) {
			cout << dispari[i] << endl;
		}
		cout << endl << "Ci sono " << npari << " numeri pari e " << ndispari << " dispari" << endl;// stampa il numero dei pari e dei dispari
	}

}


