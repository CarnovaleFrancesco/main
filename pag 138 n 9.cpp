#include <iostream>

using namespace std;
 
 int main()
{
	cout<<"questo programma inserendo un numero ti riporta video un giorno della settimana."<<endl;

	//variabili
	int d=1;
	int l=2;
	int mar=3;
	int mer=4;
	int g=5;
	int v=6;
	int s=7;
	int n;
	
	//input dati
	cout<<"inserisci un numero: ";
	cin>>n;
	cout<<"\n";
	
	//operazioni
	switch(n)
	{
		case 1:
			cout<<"corrisponde a domenica"<<endl;
			break;
		
		case 2:
			cout<<"corrisponde a lunedi'"<<endl;
			break;
			
		case 3:
			cout<<"corrisponde a martedi'"<<endl;
			break;
			
		case 4:
			cout<<"corrisponde a mercoledi'"<<endl;
			break;
			
		case 5:
			cout<<"corrisponde a giovedi'"<<endl;
			break;
			
		case 6:
			cout<<"corrisponde a venerdi'"<<endl;
			break;
			
		case 7:
			cout<<"corrisponde a sabato"<<endl;
			break;
			
		default:
			cout<<"non corrisponde a nessun giorno della settimana"<<endl;
			break;
	}

	system("pause");
	return 0;
 } 

