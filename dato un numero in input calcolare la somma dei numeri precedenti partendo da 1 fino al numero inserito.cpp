#include <iostream>

using namespace std;

int main()
{
	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"questo programma "<<endl;
	
	//variabili
	int r;
	int n;
	
	//input dati
	cout<<"inserisci il numero: ";
	cin>>n;
	cout<<"\n";
	
	//calcolo
	r=(n+1)*n/2;
	
	//risposta
	cout<<"questo e' il risultato: "<<r<<endl;
	
	system("pause");
	return 0;
}
