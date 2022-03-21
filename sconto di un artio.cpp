#include <iostream>

using namespace std;

int main()
{ 
	cout<<" questo programma dato un prezzo calcola lo sconto"<<endl;
	
	//variabili
	float p;
	float s;
	float t;
	float ps;
	
	//input dati
	cout<<" inserisci il prezzo dell'articolo: ";
	cin>>p;
	cout<<"\n";
	cout<<" inserisci di quanto e' lo sconto: ";
	cin>>s;
	
	//calcolo
	t=(p/100)*s;
	ps=p-t;
	
	//risposta
	cout<<" questo e' il prezzo scontato: "<<ps<<endl;
	
	
	system("pause");
	return 0;
}
