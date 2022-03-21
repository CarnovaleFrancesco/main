#include <iostream>

using namespace std;
 
 int main()
{
	cout<<" questo programma visualizza il numero precedete e successivo del numero letto in input "<<endl;

	//variabili
	int precedente;
	int successivo;
	int num;
	
	
	//input dati
	cout<<" inserisci il numero: \t";
	cin>>num;
	cout<<"\n";
	
	//operazioni
	precedente = num-1;
	successivo = num+1;
	
	//risposta
	cout<<" questo e' il numero scelto: "<<num<<endl;
	cout<<" questo e' il numero precedente: "<<precedente<<endl;
	cout<< " questo e' il numero successivo: "<<successivo<<endl;

	system("pause");
	return 0;
 } 
