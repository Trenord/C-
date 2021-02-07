#include <graphics.h>
#include <iostream>
#include <Windows.h>
#include <math.h>
#include <time.h>

using namespace std;
#include "funzioni.h"

int main(){
	int scelta;
	float y,xe2,x,c;
	float x1,y1,x2,y2,ris;
	
	do{
	cout << "1. Disegna retta";
	cout << endl <<"2. Disegna parabola";
	cout << endl <<"3. Calcolo distanza tra punti";
	cout << endl <<"4. Disegna retta + parabola";
	cout << endl <<"5. Punto medio";
	cout << endl <<"6. Punto medio formula inversa"<< endl;
	
	cin >>scelta;
	}while(scelta > 3 or scelta <= 0);
	
	initwindow(800,800);
	line(400,0,400,800);
	line(0,400,800,400);
	int n=40;
	for (int i=0;i<800;i=i+10){
		line (396,i,405,i);
	}
	for (int i=0;i<800;i=i+10){
		line (i,396,i,405);
	}
	settextstyle(2,0,5);
	outtextxy(775,410,"X");
	outtextxy(410,10,"Y");

	switch (scelta){
		case 1:
			cout << "Formula da usare y = x + c";
			y=1;
			cout << endl <<"Inserire x ";
			cin >>x;
			cout << endl <<"Inserire c " ;
			cin >>c; 
			retta(y,x,c);
		break;
		case 2:
			cout << "Formula da usare y = x^2 + x + c";
			cout << endl <<"Inserire x^2 ";
			cin >>xe2;
			cout << endl <<"Inserire x " ;
			cin >>x; 
			cout << endl <<"Inserire c " ;
			cin >>c;
			parabola(xe2,x,c);
		break;
		case 3:
			cout << endl <<"inserire x primo punto: ";
			cin>>x1;
			cout << endl <<"inserire y primo punto: ";
			cin>>y1;
			cout << endl <<"inserire x secondo punt: ";
			cin>>x2;
			cout << endl <<"inserire y secondo punto: ";
			cin>>y2;
			ris=dist2punti(x1,y1,x2,y2);
			cout << "La distanza tra il primo punto e il secondo è " << ris;
		break;
		case 4:
			
		break;
}
	getch();
}
