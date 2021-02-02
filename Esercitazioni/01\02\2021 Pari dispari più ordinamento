#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main (){
	srand(time(0));
	int n,m,i=0,npari=0,ndispari=0;
	int a[500],pari[500],dispari[500];
	
	cout<<"Inserisci il numero di volte ";
	cin >> n;
	
	for (i=0;i<n;i++){
		a[i]=rand()%101;
		cout<<a[i]<<endl;
	}
	int j=0,temp=0;
	for (int i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

	for (int ii=0;ii<n;ii++){
		//cout<<m<<endl;
		m=a[ii]%2;
		
		if (m==0){
			pari[npari]=a[ii];
			npari++;
		}
		
		if (m!=0){
			dispari[ndispari]=a[ii];
			
			ndispari++;
		}

	}
	cout<<endl<<"I pari sono"<<endl;
	for (int iii=0;iii<npari;iii++){
		cout <<pari[iii]<<endl;
	}
	cout<<endl<<"I dispari sono"<<endl;
	for (int iii=0;iii<ndispari;iii++){
		cout <<dispari[iii]<<endl;
	}
}
