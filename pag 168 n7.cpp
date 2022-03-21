#include <iostream>

using namespace std;

int main()
{
	// Leggi da tastiera un numero intero NUM compreso tra 1 e 20 e visualizza la tabella pitagorica dei numeri tra 1 e NUM.

	//variabili
	int num;
	int i;
	int tab;
	i=1;
	num=0;
	tab=2;

	//input dati
	cout<<"inserisci un numero: ";
	cin>>num;

	//calcolo
	if(num>1&&num<20)
	{
		for(i=0;i<=10;i++)
		{
			tab*=i;
			i++;
			cout<<tab<<endl;
		}
		
			//for()
	}
	
	
	
	
	system("pause");
	return 0;
}
