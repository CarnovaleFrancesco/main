#include <iostream>

using namespace std;

int main()
{
	//Scrivere i numeri naturali compresi tra 1 e un numero letto in input.
	
	//variabili
	int i;
	int n;
	int in;
	
	//input dati
	i=0;
	n=0;
	in=0;
	cout<<"inserisci un numero: ";
	cin>>n;
	cout<<"\n";
	
	//calcoli
	for(i=0;i<n;i++)
	{
		in+=1;
		cout<<in<<endl;
	}
	
	system("pause");
	return 0;
}
