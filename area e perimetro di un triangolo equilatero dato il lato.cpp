#include <iostream>
#include <cmath>

using namespace std;
 
 int main()
{
	cout<<" questo programma calcola il perimetro e l'area di un triangolo equilatero "<<endl;	

	//variabili
	int l;
	int perimetro;
	int area;
	int h;
	
	//input dati
	cout<<" inserisci il valore del lato: ";
	cin>>l;
	cout<<" \n ";
	
	//operazioni
	perimetro = l*3;
	h = perimetro/(2*sqrt(3));
	area = (h*l)/2;
	
	//risposta
	cout<<" questo e' il perimetro del triangolo: "<<perimetro<<endl;
	cout<<" questa e' l'area del triangolo: "<<area<<endl;

	system("pause");
	return 0;
 } 
