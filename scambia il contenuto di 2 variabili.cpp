#include <iostream>

using namespace std;
 
 int main()
{
	cout<<"questo programma scambia il contenuto di 2 variabili"<<endl;

	//variabili
	int a;
	int b;
	int c;
	
	//input dati
	cout<< " inserisci il contenuto della prima variabile: ";
	cin>>a;
	cout<<"\n";
	cout<<" inserisci il contenuto della seconda variabile: ";
	cin>>b,
	cout<<" \n";
	
	//operazioni
	c=a;
	a=b;
	b=c;
	
	//risposta
	cout<<" questo e' il contenuto della prima variabile: "<<a<<endl;
	cout<< " questo e' il contenuto della seconda variabile: "<<b<<endl;

	system("pause");
	return 0;
 } 
