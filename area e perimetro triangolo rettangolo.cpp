#include <iostream>

using namespace std;
int main()
{
	cout<<" questo programma calcola l'area e il perimetro del triangolo rettangolo. "<<"\n";
	//variabili
	float ipotenusa;
	float perimetro;
	float area;
	float cateto1;
	float cateto2;
	
	//input dati
	cout<<" inserisci il valore della ipotenusa: \t";
	cin>>ipotenusa;
	cout<<"\n";
	cout<<" inserisci il valore dei cateto 1: \t";
	cin>>cateto1;
	cout<<"\n";
	cout<<" inserisci il valore del cateto 2: \t";
	cin>>cateto2;
	cout<<"\n";
	
	//calcoli
	perimetro=cateto1+cateto2+ipotenusa;
	area=cateto1*cateto2;
	
	//risposte
	cout<<" questo e' il perimetro del triangolo rettangolo: \t";
	cout<<perimetro<<"\n";
	cout<<" questa e' l'area del triangolo rettangolo: \t";
	cout<<area<<"\n";
	
	system("pause");
	return 0;
}
