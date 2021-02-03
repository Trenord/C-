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

int cfs(){
	int P1,PC,m,diff;

		do{
		cout <<"Seleziona la difficolta del bot"<<endl;
		cout <<"1. Semplice"<<endl;
		cout <<"2. Imbattibile"<<endl;
		cin >>diff;
		}while(diff<1 or diff>2);
		if (diff==1){//bot semplice con numeri random
			cout <<endl<<"Inserisci la scelta "<<endl<<"1.Carta "<<endl<<"2.Forbice"<<endl<<"3.Sasso"<<endl;
			cin>>P1;
			PC=rand()%1+3;
			if (PC==1){
				cout <<"Il computer ha scelto Carta" ;
			}
			if (PC==2){
				cout <<"Il computer ha scelto Forbice" ;
			}
			if (PC==3){
				cout <<"Il computer ha scelto Sasso" ;
			}
			
			if (PC==1 and P1==1 or PC==2 and P1==2 or PC==3 and P1==3){
				cout <<endl<<"Pareggio";
			}
			if (PC==1 and P1==2 or PC==2 and P1==3 or PC==3 and P1==1){
				cout <<endl<<"Hai vinto";
			}else{
				cout <<endl<<"Hai perso";
			}
		}else{//bot impossibile farà la mossa vincente
			cout <<endl<<"Inserisci la scelta "<<endl<<"1.Carta "<<endl<<"2.Forbice"<<endl<<"3.Sasso"<<endl;
			cin>>P1;
			
			if (P1==3){
				cout <<"Il computer ha scelto Carta" ;
				PC=1;
			}
			if (P1==1){
				cout <<"Il computer ha scelto Forbice" ;
				PC=2;
			}
			if (P1==2){
				cout <<"Il computer ha scelto Sasso" ;
				PC=3;
			}
			//Controlla il vincitore
			if (PC==1 and P1==1 or PC==2 and P1==2 or PC==3 and P1==3){
				cout <<endl<<"Pareggio";
			}
			if (PC==1 and P1==2 or PC==2 and P1==3 or PC==3 and P1==1){
				cout <<endl<<"Hai vinto";
			}else{
				cout <<endl<<"Hai perso";
			}
		}
}
int verifica(int a[20],int x,int n){
	int cond=0;
	for (int i=0;i<n;i++){
		//Controlla l'array fino al numero generato 
		if (x==a[i]){
			//se il numero appena generato X è ugale al numero a[i] ritorna con 1 altrimenti con 0
			cond=1;
			return cond;
		}
	}
	cond=0;
	return cond;
}

int tombola(){
	int a[20],n=-1,ver;
	
	for (int i=0;i<20;i++){//Estrae 20 volte
		n++;
		if (i>0){//se è la prima volta genera il numero e basta
			do{//se è la seconda volta genera un numero e verifica se è già stato estratto
			a[i]=rand()% 101 + 1;
			ver=verifica(a,a[i],n);//se verifica() è 1 il numero appena generato è gia presente nell'array
		}while(ver==1);
		}else{
			a[i]=rand()% 101 + 1;
		}

	}
	for (int i=0;i<20;i++){
		cout<<"E' uscito "<<a[i]<<endl;
	}
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
	cout <<endl;
	}while(scelta<1 or scelta>3);
	
	switch(scelta){
		case 1:
			random();
			break;
		case 2:
			cfs();
			break;
		case 3:
			tombola();
			break;
	}

}
