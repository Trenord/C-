#include <iostream>

using namespace std;
sasas

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
    cout << "inserisci un numero da elevare alla seconda";
    cin >> x;
    cout << "Il quadrato di " << x << " è "<< x*x;
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

int MaxMin(){
    int x, i;
    int temp, j;

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
        cout << "";
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
        cout << "";
        break;
    }
}
