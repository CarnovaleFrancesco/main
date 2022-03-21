#include <iostream>

using namespace std;

int main()
{
	//Leggere un numero naturale n e scrivere in output un numero n di “+”
	
	//variabili
	int n=0;
	int i=0;
	
	//input dati
	cout<<"inserisci un numero: ";
	cin>>n;
	cout<<"\n";
	
	//calcoli
	for(i=0;i<n;i++)
	{
		cout<<"+";
	}
	
	cout<<"\n";
	cout<<"\n";
	
	system("pause");
	return 0;
}
