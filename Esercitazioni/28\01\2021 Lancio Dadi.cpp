//  28/01/21 

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int tiradado(){
	int dado[2],s;
	dado[0]=rand()%6+1;
	dado[1]=rand()%6+1;
	s=dado[0]+dado[1];
	return s;
}

int main (){
	srand(time(0));
	int save[6], x;
	for(int i=0;i<6;i++){
		save[i]=tiradado();	
		cout<<"E' uscito "<<save[i]<<"\n";
	}
	cout<<"\n";
	for (int ii=0;ii<6;ii++){
		x=ii+1;
		cout << "Nel lancio "<< x <<" era uscito " << save[ii] << "\n";
	}
}
