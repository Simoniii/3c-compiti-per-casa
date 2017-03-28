#include <iostream>

using namespace std;
void ordinamentovettore (int [], int);
int main()
{
  int i=0;
  cout << "Dimensione del vettore: ";
  cin >>i;
  int v[i];
  for (int x=0; x<(i);x++) {
    cout << "Inserisci il " << x+1<< " elemento: ";
    cin >> v[x];
     }
ordinamentovettore(v,i);
}
void ordinamentovettore(int vet[], int n) {
int i,j,comodo,minimo;
for (j=0;j<n;j++) {
minimo=vet[j];
for (i=j;i<n;i++ ) { //scovamento dell'elemento minimo
 if ((vet[i])<=minimo) {
        minimo=vet[i]; // shift dell'elemento minimo con l'elemento della cella nel primo posto
        vet[i]=vet[j];
        vet[j]=minimo;
 }
}
cout << vet[j] << endl;
}
}
