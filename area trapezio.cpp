#include <iostream>

using namespace std;

int main()
{
	cout<<"questo programma legge le basi e l'altezza di un trapezio isoscele e ne calcola l'area "<<"\n";
	//variabili
	float bmin;
	float bmax;
	float area;
	float h;
	
	//dati input programma
	cout<<" inserisci la base minore del trapezio: \n";
	cin>>bmin;
	cout<<"\n";
	cout<<"inserisci la base maggiore del trapezio: \n";
	cin>>bmax;
	cout<<"\n";
	cout<<"inserisci l'altezza del trapezio \n";
	cin>>h;
	//calcoli
	area=((bmin+bmax)*h)/2;
	
	//risposte
	cout<<"questa e' l'area del trapezio: \n";
	cout<<area<<"\n";
	system("pause");
	return 0;
}
