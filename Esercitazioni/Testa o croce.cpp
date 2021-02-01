#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main (){
	srand(time(0));
	int moneta, n;
	cout<<"Inserisci il numero di volte ";
	cin >> n;
	for (int i=0;i<n;i++){
		moneta=rand()%2;
		if (moneta == 1){
			cout << "E' uscita Testa" << endl;	
		}else{
			cout << "E' uscita Croce" << endl;	
		}
	}
}
