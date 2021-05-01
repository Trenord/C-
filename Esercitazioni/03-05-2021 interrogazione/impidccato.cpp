#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <graphics.h>

using namespace std;

string fparola(){ //funzione per prendere una parola random da un file di testo
	ifstream file("parole.txt");
	int n=rand() % 1000;
	if (file.is_open())
	{
		string line;
	    for(int i=0;i<n;i++){
			getline(file, line);	
		}
	return line;
	}else{
		cout<<"Impossibile aprire il file delle parole";
		
	}
}


int main (){
	srand(time(NULL));
	setlocale(LC_ALL, "italian");
	
	string parola=fparola();;
	//cout<<parola<<endl;
	int pl=parola.length();
	string utente(pl*2, ' ');
	char l;
	int tentativi=15,vt=0;
	int check=0;

	
	for (int i=0;i<pl*2;i=i+2){
		utente[i]='_';
	}
	cout <<"La parola ha "<<parola.length()<<" lettere"<<endl<<utente;
	
	do{
		cout<<endl<<"Inserisci una lettera ";
		cin>>l;
		 
		for (int i=0;i<pl;i++){
			if (parola[i]==l){
				utente[i*2]=l;//sostituisce nella stringa con i trattini la lettera dell'utente, solo se è presente nella parola originale
				vt++;// conta quante volte il char inserito dall'utente è presente nella parola 
				check++;
			}
		}
		if (vt==0){
			tentativi--;//se il char dell'utente non è nella parola originale toglie un tentativo
		}
		
		if (check==pl){  //se ha trovato tutte le lettere ha vinto  (check parte da 0 e ogni lettera trovata viene incrementato di uno)
			cout<<endl<<endl<<"Hai vinto "<<endl<<"La parola era '"<<parola<<"'";;
			return 0;
		}
		
		cout<<endl<<endl<<utente<<endl<<endl<<"Ti rimangono "<<tentativi<<" tentativi";
		vt=0;
	}while(tentativi>0);
	
	if (tentativi==0){//se tentativi == 0 ha perso
		cout<<endl<<endl<<"Hai perso \nLa parola era '"<<parola<<"'";
	}
}

