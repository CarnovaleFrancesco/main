#include <iostream> 
#include <cmath>

using namespace std;

int main()
{
	cout<<" questo programma calcola l'area e il perimetro del triangolo iscoscele avendo l'altezza e il lato obliquo \t" <<endl; 
	
	//varibili
	int h;
	int latoobl;
	int area;
	int perimetro;
	int base;
	
	//input dati
	cout<<" inserisci il valore dell' altezza: ";
	cin>>h;
	cout<<"\n";
	cout<<" inserisci il valore del lato obliquo: ";
	cin>>latoobl;
	cout<<"\n";
	
	//operazioni
	
	base=2*sqrt((latoobl*2)+(h*2));
	perimetro=(latoobl*2)+base;
	area=(base*h)/2;
	
	
	//risposta
	cout<<"questo e' il perimetro del triangolo isoscele: ";
	cout<<perimetro<<endl;
	cout<<" questa e' l'area del triangolo isoscele: ";
	cout<<area<<endl;
	
	system("pause");
	return 0;
}
