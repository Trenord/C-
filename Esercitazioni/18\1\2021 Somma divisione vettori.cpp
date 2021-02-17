#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>

using namespace std;

float ordinaa(int x, float a[]) {//ordina un array passato in argomento
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

float min(float a[],int x){//passando un array restituisce il float minimo di quell'array
	float min=0,temp=0;
	for (int i = 0; i < x; i++) {
		if (temp == 0) {
			min = a[i];
			temp++;
		}else{
			if (min>a[i]) {
				min = a[i];
			}
		}
	}
	return min;
}

float max(float a[],int x) {//passando un array restituisce il float massimo di quell'array
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

float pariF(float s1[], float s2[], float d1[], float d2[], int n, float pari[]){
	float m = 0;
	for (int ii = 0;ii<n;ii++) {//divide i numeri pari dagli array e li mette nel'array dei pari 
		m = fmod(s1[ii],2);
		if (m == 0) {
			pari[npari] = s1[ii];
			npari++;// conta il numero di pari
		}
		m = fmod(s2[ii], 2); 
		if (m == 0) {
			pari[npari] = s2[ii];
			npari++;
		}
		m = fmod(d1[ii], 2);
		if (m == 0) {
			pari[npari] = d1[ii];
			npari++;
		}
		m = fmod(d2[ii], 2);
		if (m == 0) {
			pari[npari] = d2[ii];
			npari++;
		}
	}
	return *pari;//Restituisce pari[] con dentro tutti i numeri pari degli array s1, s2, d1, d2 e conta quanti sono i totale
}
float dispariF(float s1[], float s2[], float d1[], float d2[], int n, float dispari[]) {
	float m = 0;
	for (int ii = 0; ii < n; ii++) {
		m = fmod(s1[ii], 2);
		if (m != 0) {
			dispari[ndispari] = s1[ii];
			ndispari++;
		}
		m = fmod(s2[ii], 2);
		if (m != 0) {
			dispari[ndispari] = s2[ii];
			ndispari++;
		}
		m = fmod(d1[ii], 2);
		if (m != 0) {
			dispari[ndispari] = d1[ii];
			ndispari++;
		}
		m = fmod(d2[ii], 2);
		if (m != 0) {
			dispari[ndispari] = d2[ii];
			ndispari++;
		}
	}
	return *dispari;//Restituisce dispari[] con dentro tutti i numeri dispari degli array s1, s2, d1, d2 e conta quanti sono i totale
}

int main() {
	float a[10], b[10], aa[10], bb[10];
	float s1[10], d1[10], s2[10], d2[10], n = 10;
	int x = 10;

	srand(time(0));

	for (int i = 0; i < n; i++) {//rando di due array
		a[i] = rand();
		b[i] = rand();
	}

	for (int i = 0; i < n; i++) {
		cout << "Inserire elemento " << i << " del primo array ";//chiede di inserire i numeri di due array 
		cin >> aa[i];
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << "Inserire elemento " << i << " del secondo array ";
		cin >> bb[i];
	}
	//ordina gli tutti gli array
	ordinaa(x, a);
	ordinaa(x, b);
	ordinaa(x, aa);
	ordinaa(x, bb);

	cout << endl;
	//stampa tutti gli array ordinati
	for (int i = 0; i < n; i++) {
		cout << "Array a ordinato " << a[i] << endl;

	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << "Array b ordinato " << b[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << "Array aa ordinato " << aa[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << "Array bb ordinato " << bb[i] << endl;
	}
	//Somma e divide il primo array random con il secondo random e fa la stessa cosa con gli array inseriti dall'utente
	for (int i = 0; i < n; i++) {
		s1[i] = a[i] + b[i];
		d1[i] = a[i] / b[i];
		s2[i] = aa[i] + bb[i];
		d2[i] = aa[i] / bb[i];
	}

	cout << endl;
	//stampa gli array sommati e divisi non ordinati
	for (int i = 0; i < n; i++) {
		cout << "s1 = a[i] + b[i] = " << s1[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << "d1 = a[i] / b[i] = " << d1[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << "s2 = aa[i] + bb[i] = " << s2[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << "d1 = aa[i] / bb[i] = " << d2[i] << endl;
	}
	//stampa il minimo e il massimo degli array sommati e divisi
	cout << endl << "Il numero minimo dell'array s1 è " << min(s1, x) << " e il massimo è " << max(s1, x);
	cout << endl << "Il numero minimo dell'array d1 è " << min(d1, x) << " e il massimo è " << max(d1, x);
	cout << endl << "Il numero minimo dell'array s2 è " << min(s2, x) << " e il massimo è " << max(s2, x);
	cout << endl << "Il numero minimo dell'array d2 è " << min(d2, x) << " e il massimo è " << max(d2, x);
	cout << endl;

	//Crea due array per contenere i dispari e i pari
	float dispari[40];
	float pari[40];
	pariF(s1, s2, d1, d2, x,pari);//Restituisce l'array pari[] con dentro tutti i numeri pari degli array sommati e divisi
	dispariF(s1, s2, d1, d2, x,dispari);//Restituisce l'array dispari[] con dentro tutti i numeri dispari degli array sommati e divisi
	cout << endl << endl << "Numeri Pari" << endl;//stampa i nuemeri pari e i dispari
	for (int i = 0; i < npari; i++) {
		cout << pari[i] << endl;
	}
	cout << endl << endl << "Numeri Dispari" << endl;
	for (int i = 0; i < ndispari; i++) {
		cout << dispari[i] << endl;
	}
	cout << endl << "Ci sono "<<npari <<" numeri pari e "<< ndispari<< " dispari"<<endl ;// stampa il numero dei pari e dei dispari
}
