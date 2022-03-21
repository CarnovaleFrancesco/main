#include<iostream>

using namespace std;

int main()
{	
    cout<<" Dati tre numeri calcolare la terna pitagorica"<<endl;
	
	//Variabili
    int a;
	int b;
	int c;
	
	//Input dati
	cout<<" Inserisci il primo valore: ";
	cin>>a;
	cout<<"\n";
	cout<<" Inserisci il secondo valore: ";
	cin>>b;
	cout<<"\n";
	cout<<" Inserisci il terzo valore: ";
	cin>>c;
	cout<<"\n";



	//Risposta
	
	if 	((a*a)+(b*b)==(c*c))
	 {
		cout<<" i tre numeri formano la terna pitagorica";
	}
	else
	{
		cout<<" i tre numeri non formano la terna pitagorica";
	}
	cout<<"\n";
	
	system("pause");
	return 0;
}
