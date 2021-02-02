#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int random(){
	int i,t,maggiore=0,n,a[1000];
	
	cout<<"Inserisci il numero di numeri da inserire ";
	cin >>n;
	cout<<endl<<"I numeri sono"<<endl;
	for(i=0;i<n;i++){
		t=i+1;
		a[i]=rand() % 350 + 1950;
	
		cout<<a[i]<<endl;
		if (maggiore<a[i]){
			maggiore = a[i];
		}
	}
	cout <<endl<<"Il numero più grande è "<<maggiore;
}

int main (){
	setlocale(LC_ALL, "italian");
	srand(time(0));
	int scelta=0;
	do{
	cout<<"   Seleziona il programma"<<endl;
	cout<<"1. Numero più grande di un array di n numero casuali compresi tra 1950 e 2300"<<endl;
	cout<<"2. Carta forbice sasso"<<endl;
	cout<<"3. Tombola 20 numeri"<<endl;
	cin >>scelta;
	}while(scelta<1 or scelta>3);
	
	switch(scelta){
		case 1:
			random();
			break;
		case 2:
			
			break;
		case 3:
		
			break;
	}

}
