#include <iostream>

using namespace std;

int main (){
	setlocale(LC_ALL, "italian");
	string so[3],s1[3],temp;
	
	cout<<"Stringa 1: ";
	cin>>s1[0];
	cout<<"Stringa 2: ";
	cin>>s1[1];
	cout<<"Stringa 3: ";
	cin>>s1[2];
	
	so[0]=s1[0];
	so[1]=s1[1];
	so[2]=s1[2];
	
	for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++)
        {
            if (so[j] < so[i]) {
                temp = so[i];
                so[i] = so[j];
                so[j] = temp;
            }
        }
    }
    
	cout<<endl<<"In ordine "<<endl<<so[0]<<endl<<so[1]<<endl<<so[2]<<endl;
	
	
	
	if(s1[0].length()>s1[1].length() and s1[0].length()>s1[2].length()){
		cout<<endl<<"La stringa 1 è maggiore e ha " << s1[0].length()<<" caratteri";
	}
	else if(s1[1].length()>s1[0].length() and s1[1].length()>s1[2].length()){
		cout<<endl<<"La stringa 2 è maggiore e ha " << s1[1].length()<<" caratteri";
	}else{
		cout<<endl<<"La stringa 3 è maggiore e ha " << s1[2].length()<<" caratteri";	
	}
	
	
	
	string s3="Ciao mondo";
	int n=s3.length();
	for (int i=0;i<n;i++){
		if (s3[i]=='a'){
			s3[i]='e';
		}
		else if (s3[i]=='e'){
			s3[i]='i';
		}
		else if (s3[i]=='i'){
			s3[i]='o';
		}
		else if (s3[i]=='o'){
			s3[i]='u';
		}
	}
	cout<<endl<<endl<<"Prima della conversione  Ciao mondo"<<endl<<"Dopo la conversione      "<<s3;
	
	
	for (int i=0;i<n;i++){
		if (s3[i]=='a'){
			s3[i]=' ';
		
		}
		else if (s3[i]=='e'){
			s3[i]=' ';
		
		}
		else if (s3[i]=='i'){
			s3[i]=' ';
		
		}
		else if (s3[i]=='o'){
			s3[i]=' ';
		
		}
		else if (s3[i]=='u'){
			s3[i]=' ';
		
		}
	}
	cout<<endl<<endl<<"Ciao mondo senza vocali è "<<s3;
}

