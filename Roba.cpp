#include <iostream>

using namespace std;

int main (){
  
  //tastiera ita
  setlocale(LC_ALL, "italian");
  
  //ordinamento
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++)
    {
      if (a[j] < a[i]) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}
