#include <iostream>
#include <stdlib.h> 
#include <time.h>

using namespace std;

int minmax(int a[][5]){
	int n=5;
	int min=a[0][0];
	int max=a[0][0];
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if (min>a[i][j]){
				min=a[i][j];
			}
		}
	}
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if (max<a[i][j]){
				max=a[i][j];
			}
		}
	}
	cout<<endl<<"Il minimo è "<<min<<endl<<"Il massimo è "<<max;
}

int diag1(int a[][5]){
	int x=5;
	cout<<endl<<"Diagonale primaria"<<endl;
	for (int i = 0; i < x; i++) {
		cout<<a[i][i]<<endl;
	}
	cout<<endl;
}
int diag2(int a[][5]){
	int x=5;
	int p = x;
	cout<<endl<<"Diagonale secondaria "<<endl;
	for (int i = 0; i < x; i++) {
		p--;
		cout<<a[i][p]<<endl;
	}
	cout<<endl;
}

int case3(){
	int b[5][5],n=5,scelta;
	cout<<endl<<"Matrice 5x5"<<endl;
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			b[i][j]=rand();
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"Inserire secondo switch case \n1 diagonale principale \n2 diagonale secondaria\n3 min max\n";
	cin>>scelta;
	
	switch(scelta){
		case 1:
			diag1(b);
			break;
		case 2:
			diag2(b);
			break;
		case 3:
			minmax(b);
			break;
	}
}

int stampavettore(int n, int somma[]){
	cout <<endl<<"Somma di ogni riga"<<endl;
	
	for (int i=1;i<=n;i++){
		cout<<"Riga "<< i << " "<<somma[i-1]<<endl;
	}
}
int stampavettore2(int n, int somma[]){
	cout <<endl<<"Somma di ogni colonna"<<endl;
	
	for (int i=1;i<=n;i++){
		cout<<"Colonna "<< i << " "<<somma[i-1]<<" | ";
	}
	cout<<endl;
}


int case2(int n,int m, int a[][300]){
	int somma[300];
	for (int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				somma[i]=a[j][i]+somma[i];
			
			}
			
		}
		
	stampavettore2(m,somma);
	return 1;
}



int case1(int n, int a[][300]){
	int somma[300];
	for (int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				somma[i]=a[i][j]+somma[i];
			
			}
			
		}
		
	stampavettore(n,somma);
	return 1;
}

int main (){
	int a[300][300],n,m,scelta;
	
	srand(time(NULL));
	
	do{
		do{
			cout<<endl<<"Scegli il case 1 o 2 o 3 o 4 per uscire ";
			cin>>scelta;
		}while(scelta < 1 or scelta > 4);
	
		switch(scelta){
			case 1:
				
				cout <<endl<<"Inserire largezza matrice ";
				cin >>n;
				for (int i=0;i<n;i++){
					for(int j=0;j<n;j++){
						a[i][j]=rand()% 283 + 50;
						cout<<a[i][j]<<" ";
					}
					cout<<endl;
				}
				
				case1(n,a);
				break;
			
			case 2:
				cout <<endl<<"Inserire righe matrice ";
				cin >>n;
				cout <<"Inserire colonne matrice ";
				cin >>m;
				for (int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						a[i][j]=rand()% 1800 + 200;
						cout<<a[i][j]<<" ";
					}
					cout<<endl;
				}
				case2(n,m,a);
				break;
			case 3:
				case3();
				break;
			
		}
	}while(scelta!=4);
}

