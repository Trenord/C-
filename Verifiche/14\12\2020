#include <iostream>

using namespace std;

int media(int voti[1000], int x) {
    int i;
    double somma = 0, r = 0;

    for (i = 0; i < x; i++) {
        somma = somma + voti[i];
    }
    r = somma / x;
    
    return r;
}

int main() {
    setlocale(LC_ALL, "italian");
    int Vst[1000];
    int stm[1000];
    int Cm[1000];
    int nVoti, nClassi, nStudenti;
    int i;
    
    cout << "Inserisci numero classi \n";
    cin >> nClassi;
    for (int iii = 0; iii < nClassi; iii++) {
        cout << "Inserisci numero studenti della classe " << iii+1 <<"\n";
        cin >> nStudenti;
        for (i = 0; i < nStudenti; i++) {
            cout << "Inserire numero voti studente " << i + 1 << "\n";
            cin >> nVoti;
            cout << "inserisci i voti dello studente " << i + 1 << "\n";
            for (int ii = 0; ii < nVoti; ii++) {
                cout << "inserisci il voto " << ii + 1 << "\n";
                cin >> Vst[ii];

            }
            stm[i] = media(Vst, nVoti);
            Cm[i]=stm[i];
            cout << "La media di questo studende è " << stm[i] <<"\n" <<"\n";
        }

        Cm[iii] = media(Cm,nStudenti);
        cout << "La media della classe "<< iii << " è "<<Cm[iii];
        
    }

}
