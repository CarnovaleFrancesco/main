#include <iostream>

using namespace std;

int main()
{
	cout<<"questo programma converte i secondi in ore,minuti e secondi"<<endl;
	
	//variabili
	int s;
	int h;
	int m;
	
	//input dati
	cout<<" inserisci il valore in secondi: ";
	cin>>s;
	cout<<"\n";
		
	//calcoli
	h=(s/60/60);
	m=(s/60);
	
	//risposta
	cout<<" queste sono "<<h<<" ore "<<m<<" minuti e "<<s<<" secondi "<<endl;

	
	system ("pause");
	return 0;
}
