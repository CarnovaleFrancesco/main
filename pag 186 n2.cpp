#include <iostream>
using namespace std;
int main()
{
	//scrivi un programma che legge un NUM e visualizza tutti i numeri pari inferiori a tale numero
	
	//variabili
	int num;
	int i;
	int ris;
	
	ris=0;
	
	//input dati
	cout<<"inserisci un numero: ";
	cin>>num;
	cout<<"\n";
	
	//calcoli
	i=0;
	ris=num;
	
	cout<<"i numeri pari inferiori a: "<<num<<" sono: "<<endl;
	for(i=0;i<ris;i++)
	{	
		if(ris%2==0)
		{
			//ris-=2;
			cout<<ris;
			cout<<"\n";
		}
		
	}
	system ("pause");
	return 0;
}
