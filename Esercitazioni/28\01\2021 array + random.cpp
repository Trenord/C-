#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main (){
	setlocale(LC_ALL, "italian");
	int a[100],n;
	cout<<"Quanti numeri vuoi stampare?";
	cin >> n;
	srand(time(0));//cambio il seme di generazione dei numeri
	for (int i=0;i<n;i++){
		a[i]=rand() % 20; //genero numeri random da 0 a 20
		cout<< "\n" <<a[i];
	}
}
