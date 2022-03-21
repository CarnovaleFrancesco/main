#include <iostream>

using namespace std;
 
 int main()
{
	cout<<" questo programma calcola la media dei numeri. "<<endl;
	
	//variabili
	float media;
	float x;
	float somma;
	int n;
	int i;
	
	//input dati
	cout<<" inserisci il totale di quanti numeri si devono calcolare: ";
	cin>>n;
	
	//operazioni
	while (n<2){
				cout<<" inserisci un numero maggiore o uguale a 2 ";
				cin>>n;
	}
	somma=0;
	i=1;
	while (i<=n){
				cout<<" inserisci un numero: ";
				cin>>x;
				somma=somma+x;
				i=i+1;
	}

	media=somma/n;
	cout<<"\n"<<"\n";
	
	//risposta
	cout<<"Questa e' la media dei numeri: "<<media<<endl<<"\n";

	system("pause");
	return 0;
 } 
