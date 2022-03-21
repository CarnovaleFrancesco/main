#include <iostream>

using namespace std;
 
 int main()
{

//variabili
	float a;
	float b;
	float c;
	float d;
	float e;
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
	cout<<"inserisci il quarto numero: ";
	cin>>d;
	cout<<"\n";
	cout<<"inserisci il quinto numero: ";
	cin>>e;
	cout<<"\n";
	
	//operazioni
	media = (a+b+c+d+e)/5;
	
	//risposta
	cout<<" questa e' la media dei 5 numeri: "<<media<<endl;
	
	system("pause");
	return 0;
 } 
