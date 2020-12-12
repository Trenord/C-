#include <iostream>

using namespace std;


/*
int ChiediNumeri() {
    int i, nV;
    int numeri[100];
    cout << "Quanti numeri vuoi inserire?";
    cin >> nV;
    cout << "Inserisci numero\n";
    for (i = 0; i < nV; i++) {
        cin >> numeri[i];
    }
    return 0;
}

int mcd() {
    int a, b;
    cout << "Dammi il primo numero: ";
    cin >> a;
    cout << "Dammi il secondo numero: ";
    cin >> b;

    int x = a;
    int y = b;

    // Il MCD e` calcolato usando l'algoritmo Euclideo
    while (y > 0) {
        int r = x % y;
        x = y;
        y = r;
    }

    cout << "Il M.C.D. fra " << a << " e " << b << " e` " << x << endl;
    return 0;
}

int mcm() {

}*/

int quadrato() {
    int x;
    int r;

    cout << "inserisci un numero\n";
    cin >> x;
    r = sqrt(x);

    if (x%r==0) {
        cout << "Il numero è un quadrato perfetto \n";
    }else {
        cout << "Il numero non è un quadrato perfetto \n";
    }
    return 0;
}

int fattoriale() {
    float x;
    cout << "Inserisci un numero , max 34"<<"\n";
    cin >> x;
    float fat =1;
    cout << "Fattoriale di " << x << " è \n";
    for (int i = x; i>0; i=i-1) {
        fat = x * fat;
        x = x - 1;
    }
    cout << fat << "\n";
    
    return 0;
}

int media() {
    int x, i;
    double somma = 0, r = 0;

    cout << "Inserire il numero di numeri tra cui fare la media, max 1000\n";
    cin >> x;

    unsigned long long int numeri[1000];

    for (i = 0; i < x; i++) {
        cout << "inserire numero \n";
        cin >> numeri[i];
    }

    for (i = 0; i < x; i++) {
        somma = somma + numeri[i];
    }
    r = somma / x;
    cout << "La media è " << r;

    return 0;
}

int mediaArrotondata() {
    int x, i;
    long int somma = 0, r = 0;

    cout << "Inserire il numero di numeri tra cui fare la media, max 1000\n";
    cin >> x;

    unsigned long long int numeri[1000];

    for (i = 0; i < x; i++) {
        cout << "inserire numero \n";
        cin >> numeri[i];
    }

    for (i = 0; i < x; i++) {
        somma = somma + numeri[i];
    }
    r = somma / x;
    cout << "La media è " << r;

    return 0;
}

int MaxMin(){
    int x, i;
    unsigned long long int temp;
    int j;

    cout << "Inserire il numero di numeri tra cui trovare il minimo e il massimo, max 1000\n";
    cin >> x;

    unsigned long long int numeri[1000];

    for (i = 0; i < x; i++) {
        cout << "inserire numero \n";
        cin >> numeri[i];
    }

    for (i = 0; i < x; i++) {
        for (j = i + 1; j < 10; j++)
        {
            if (numeri[j] < numeri[i]) {
                temp = numeri[i];
                numeri[i] = numeri[j];
                numeri[j] = temp;
            }
        }
    }
    cout << "Il minimo è " << numeri[0] << " il massimo è " << numeri[x - 1];
    return 0;
}

int nPerfetto() {
    int n;
    int m;

    do {
        cout << "Inserisci un numero maggiore di 0 \n";
        cin >> n;

    } while (n <= 0);

    for (int i = n -1 ; i>0; i = i - 1) {
        m = n % i;
            if (m==0) {
                cout << " " << i;
                int Multipli[2];
            }
    }

    return 0;
}
int main() 
{
    setlocale(LC_ALL, "italian");

	int caso;
    cout <<"inserisci che programma vuoi usare \n";
    cin >> caso;

    switch (caso) {
    case 0:
       // mcm();
        break;
    case 1:
        cout << "";
        break;
    case 2:
        quadrato();
        break;
    case 3:
        fattoriale();
        break;
    case 4:
        cout << "";
        break;
    case 5:
        cout << "";
        break;
    case 6:
        MaxMin();
        break;
    case 7:
        media();
        break;
    case 8:
        nPerfetto();
        break;
    case 9:
        cout << "";
        break;
    case 10:
        cout << "";
        break;
    case 11:
        cout << "";
    case 12:
        cout << "";
        break;
    case 13:
        cout << "";
        break;
    case 14:
        cout << "";
        break; 
    case 15:
        cout << "";
        break;
    case 16:
        mediaArrotondata();
        break;
    }
}
