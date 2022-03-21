#include <iostream>

using namespace std;

int main()
{
	cout<" questo programma converte l'euro in lira o dollari. \n";
	//variabili
	float euro;
	float lire;
	float dollari;
	
	//input dati
	cout<<" inserisci il valore in euro: \n";
	cin>>euro;
	
	//calcoli
	lire = (euro*1936.27);
	dollari= (euro*1.16);
	
	//risposta
	cout<<" questi sono "<<euro<<" euro in lire: ";
	cout<<lire;
	cout<<"\n";
	cout<<" questi sono "<<euro<<" in dollari: ";
	cout<<dollari;
	cout<<"\n";

	system("pause");
	return 0;
}
