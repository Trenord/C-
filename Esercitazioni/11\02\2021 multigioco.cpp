#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int tiradado() {
	int dado[2], s;
	dado[0] = rand() % 6 + 1;
	dado[1] = rand() % 6 + 1;
	s = dado[0] + dado[1];
	return s;
}
int Dadi() {
	int d,p1,p2;
	do{
		cout<<"Scelta giocatore 1 ";
		cin>>p1;
	}while(p1<1 or p1>12);
	
	do{
		cout<<"Scelta giocatore 2 ";
		cin>>p2;
	}while(p2<1 or p2>12);
	d=tiradado();
	cout <<endl<< "La somma dei due dadi risulta " <<d<<endl;
	if(p1==d){
		cout <<"Il giocatore 1 ha vinto "<<endl;
	}else if(p2==d){
		cout <<"Il giocatore 2 ha vinto "<<endl;
	}else {
		cout<<"Non ha vinto nessuso " <<endl;
	}
	
	return 1;
}

int moneta() {
	int moneta;
	int scelta;
	do {
		cout << "Testa=1  croce=2 ";
		cin >> scelta;
		
	} while (scelta > 2 or scelta < 1);
	moneta = rand() %  2;
	if (moneta==1) {
		cout << "E' uscita Croce"<<endl;
	}
	else {
		cout << "E' uscita Testa"<<endl;
	}
	if (scelta == 1 and moneta == 0 or scelta == 2 and moneta == 1)
	{
		cout << "Hai vinto";
	}
	else {
		cout << "Hai perso";

	}

	return 1;
}
int cfs() {
	int P1, PC, m, diff;

	do {
		cout << "Seleziona la difficolta del bot" << endl;
		cout << "1. Semplice" << endl;
		cout << "2. Imbattibile" << endl;
		cin >> diff;
	} while (diff < 1 or diff>2);
	if (diff == 1) {
		cout << endl << "Inserisci la scelta " << endl << "1.Carta " << endl << "2.Forbice" << endl << "3.Sasso" << endl;
		cin >> P1;
		PC = rand() % 1 + 3;
		if (PC == 1) {
			cout << "Il computer ha scelto Carta";
		}
		if (PC == 2) {
			cout << "Il computer ha scelto Forbice";
		}
		if (PC == 3) {
			cout << "Il computer ha scelto Sasso";
		}

		if (PC == 1 and P1 == 1 or PC == 2 and P1 == 2 or PC == 3 and P1 == 3) {
			cout << endl << "Pareggio";
		}
		if (PC == 1 and P1 == 2 or PC == 2 and P1 == 3 or PC == 3 and P1 == 1) {
			cout << endl << "Hai vinto";
		}
		else {
			cout << endl << "Hai perso";
		}
	}
	else {
		cout << endl << "Inserisci la scelta " << endl << "1.Carta " << endl << "2.Forbice" << endl << "3.Sasso" << endl;
		cin >> P1;

		if (P1 == 3) {
			cout << "Il computer ha scelto Carta";
			PC = 1;
		}
		if (P1 == 1) {
			cout << "Il computer ha scelto Forbice";
			PC = 2;
		}
		if (P1 == 2) {
			cout << "Il computer ha scelto Sasso";
			PC = 3;
		}
		
		if (PC == 1 and P1 == 1 or PC == 2 and P1 == 2 or PC == 3 and P1 == 3) {
			cout << endl << "Pareggio";
		}
		if (PC == 1 and P1 == 2 or PC == 2 and P1 == 3 or PC == 3 and P1 == 1) {
			cout << endl << "Hai vinto";
		}
		else {
			cout << endl << "Hai perso";
		}
	}
	return 1;
}
int verifica(int a[30], int x, int n) {
	int cond = 0;
	for (int i = 0; i < n; i++) {

		if (x == a[i]) {
	
			cond = 1;
			
			return cond;
		}
	}
	cond = 0;
	return cond;
}

int tombola() {
	int a[30], n = -1, ver,c1[20], c2[20], sc1[20], sc2[20], c, numeri = 0,numeri2 = 0;
	do {
		cout << endl << "Scegli se usare 1 o 2 cartelle ";
		cin >> c;
	} while (c > 2 or c < 1);
	if (c == 1) {
		//crea cartella c1
		for (int i = 0; i < 20; i++) {
			n++;
			if (i > 0) {
				do {
					c1[i] = rand() % 91 + 1;
					ver = verifica(c1, c1[i], n);
				} while (ver == 1);
			}
			else {
				c1[i] = rand() % 91 + 1;
			}
		}
		n = -1;
		//crea numeri casuali
		for (int i = 0; i < 30; i++) {
			n++;
			if (i > 0) {
				do {
					a[i] = rand() % 91 + 1;
					ver = verifica(a, a[i], n);
				} while (ver == 1);
			}
			else {
				a[i] = rand() % 91 + 1;
			}
		}
		//verifica numeri
		for (int i = 0; i < 20; i++) {
			ver = verifica(a, c1[i], 30);
			if (ver == 1) {
				numeri = numeri + 1;
				//cout <<endl<<"numeri "<<numeri <<" "<< c1[i]<<" "<<a[i];
			}
		}
	}else{
		//crea cartelle c1 e c2
		for (int i = 0; i < 20; i++) {
			n++;
			if (i > 0) {
				do {
					c1[i] = rand() % 91 + 1;
					ver = verifica(c1, c1[i], n);
				} while (ver == 1);
			}
			else {
				c1[i] = rand() % 91 + 1;
			}
		}
		n = -1;
		for (int i = 0; i < 20; i++) {
			n++;
			if (i > 0) {
				do {
					c2[i] = rand() % 91 + 1;
					ver = verifica(c2, c2[i], n);
				} while (ver == 1);
			}else{
				c2[i] = rand() % 91 + 1;
			}
		}
		n = -1;
		//crea numeri casuali
		for (int i = 0; i < 30; i++) {
			n++;
			if (i > 0) {
				do {
					a[i] = rand() % 91 + 1;
					ver = verifica(a, a[i], n);
				} while (ver == 1);
			}else{
				a[i] = rand() % 91 + 1;
			}
		}
		//verifica numeri
		for (int i = 0; i < 20; i++) {
			ver = verifica(a, c1[i], 30);
			if (ver == 1) {
				numeri=numeri+1;

				//cout <<endl<<"numeri "<<numeri <<" "<< c1[i]<<" "<<a[i];
			}
		}
		for (int i = 0; i < 20; i++) {
			ver = verifica(a, c2[i], 30);
			if (ver == 1) {
				numeri2 = numeri2 + 1;
				//cout <<endl<<"numeri "<<numeri <<" "<< c1[i]<<" "<<a[i];
			}
		}
	}

	if (c==2) {
		cout << endl;
		for (int i = 0; i < 20; i++) {
			cout << "Nella cartella 1 ? uscito " << c1[i] << endl;
		}
		cout << endl;
		for (int i = 0; i < 20; i++) {
			cout << "Nella cartella 2 ? uscito " << c2[i] << endl;
		}
		cout << endl;
		for (int i = 0; i < 30; i++) {
			cout << "E' stato estratto " << a[i] << endl;
		}
		cout << endl << "La cartella 1 ha " << numeri << " numeri in comune con quelli estratti";
		cout << endl << "La cartella 2 ha " << numeri2 << " numeri in comune con quelli estratti";
		cout<<endl;
		if (numeri < 2)
		{
			cout << "Nella cartella 1 non hai vinto nulla\n";
		}
		if (numeri == 2)
		{
			cout << "Nella cartella 1 hai fatto ambo\n";
		}
		if (numeri == 3)
		{
			cout << "Nella cartella 1 hai fatto terno\n";
		}
		if (numeri == 4)
		{
			cout << "Nella cartella 1 hai fatto quaderna\n";
		}
		if (numeri > 4 and numeri < 19)
		{
			cout << "Nella cartella 1 hai fatto cinquina\n";
		}
		if (numeri == 20)
		{
			cout << "Nella cartella 1 hai fatto Tombola";
		}
		if (numeri2 < 2)
		{
			cout << "Nella cartella 2 non hai vinto nulla\n";
		}
		if (numeri2 == 2)
		{
			cout << "Nella cartella 2 hai fatto ambo\n";
		}
		if (numeri2 == 3)
		{
			cout << "Nella cartella 2 hai fatto terno\n";
		}
		if (numeri2 == 4)
		{
			cout << "Nella cartella 2 hai fatto quaderna\n";
		}
		if (numeri2 > 4 and numeri < 19)
		{
			cout << "Nella cartella 2 hai fatto cinquina\n";
		}
		if (numeri2 == 20)
		{
			cout << "Nella cartella 2 hai fatto Tombola";
		}
		cout << endl;
	}else{
		cout << endl;
		for (int i = 0; i < 20; i++) {
			cout <<endl<< "Nella cartella 1 ? uscito " << c1[i];
		}
		cout << endl;
		for (int i = 0; i < 30; i++) {
			cout << "E' stato estratto " << a[i] << endl;
		}
		cout << endl <<"La cartella ha "<< numeri<<" numeri in comune con quelli estratti";

		cout << endl;
		if (numeri < 2)
		{
			cout << "Nella cartella 1 non hai vinto nulla\n";
		}
		if (numeri == 2)
		{
			cout << "Nella cartella 1 hai fatto ambo\n";
		}
		if (numeri == 3)
		{
			cout << "Nella cartella 1 hai fatto terno\n";
		}
		if (numeri == 4)
		{
			cout << "Nella cartella 1 hai fatto quaderna\n";
		}
		if (numeri > 4 and numeri < 19)
		{
			cout << "Nella cartella 1 hai fatto cinquina\n";
		}
		if (numeri == 20)
		{
			cout << "Nella cartella 1 hai fatto Tombola";
		}
	}	
	return 1;
}

int main() {
	setlocale(LC_ALL, "italian");
	srand(time(0));
	int scelta = 0;
	int ripeti=0;
	do
	{
		do {
			cout << "1. Tombola 20 numeri " << endl;
			cout << "2. Testa o croce" << endl;
			cout << "3. Carta forbice sasso" << endl;
			cout << "4. Lancio dadi" << endl;
			cout << "5. Per uscire dal programma" << endl;
			cin >> scelta;
			cout << endl;
		} while (scelta < 1 or scelta>5);

		switch (scelta) {
		case 1:
			do{
				tombola();
				cout << endl << "Scrivi 1 per ripetere il gioco e 2 per scegliere un altro gioco "<<endl;
				cin >>ripeti;
			}while(ripeti == 1);
			break;
		case 2:
			do{
				moneta();
				cout << endl << "Scrivi 1 per ripetere il gioco e 2 per scegliere un altro gioco "<<endl;
				cin >>ripeti;
			}while(ripeti == 1);
			break;
		case 3:
			do{
				cfs();
				cout << endl << "Scrivi 1 per ripetere il gioco e 2 per scegliere un altro gioco "<<endl;
				cin >>ripeti;
			}while(ripeti == 1);
			break;
		case 4:
			do{
				Dadi();
				cout << endl << "Scrivi 1 per ripetere il gioco e 2 per scegliere un altro gioco "<<endl;
				cin >>ripeti;
			}while(ripeti == 1);
			break;
		}
	}while(scelta!=5);
	return 0;
}
