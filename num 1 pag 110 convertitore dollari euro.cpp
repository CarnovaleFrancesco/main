#include <iostream>

using namespace std;
 
 int main()
{

cout<" questo programma converte il dollaro in euro \n";
	//variabili
	float euro;
	float dollari;
	
	//input dati
	cout<<" inserisci il valore in dollari: \n";
	cin>>dollari;
	
	//calcoli
	euro=(dollari*0.88383);
	
	//risposta
	cout<<" questi sono "<<dollari<<" dollari in euro: ";
	cout<<euro;
	cout<<"\n";

	system("pause");
	return 0;
 } 
