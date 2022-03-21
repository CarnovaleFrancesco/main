#include <iostream>

using namespace std;
 
 int main()
{
	cout<<" questo programma individua la media di 3 numeri "<<endl;

	//variabili
	float a;
	float b;
	float c;
	float media;
	
	//input dati
	cout<<"inserisci il primo numero: ";
	cin>>a;
	cout<<"\n";
	cout<<"inserisci il secondo numero: ";
	cin>>b;
	cout<<"\n";
	cout<<"inserisci il terzo numero: ";
	cin>>c;
	cout<<"\n";
	
	//operazioni
	media = (a+b+c)/3;
	
	//risposta
	cout<<" questa e' la media dei 3 numeri: "<<media<<endl;
	system("pause");
	return 0;
 } 
