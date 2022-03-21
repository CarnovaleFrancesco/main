#include <iostream>

using namespace std;
 
 int main()
{
	cout<<" questo programma visualizza il resto della divisione tra 2 numeri interi "<<endl;

	//variabili
	float resto;
	float q;
	int n1;
	int n2;
	
	//input dati
	cout<<" inserisci il dividendo: ";
	cin>>n1;
	cout<<"\n";
	cout<<" inserisci il divisore: ";
	cin>>n2;
	cout<<"\n";
	
	//operazioni
	resto=n1%n2;
	
	//risposta
	cout<<" questo e' il resto della divisione: "<<resto<<endl;
	
	system("pause");
	return 0;
 } 
