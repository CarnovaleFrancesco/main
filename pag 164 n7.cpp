#include <iostream>

using namespace std;

int main()
{
	//variabili
	int s;
	int n;
	int nt;
	
	//calcolo
	s=0;
	nt=0;
	
	while (s<=200)
	{
		cout<<"inserisci un numero: ";
		cin>>n;
		cout<<"\n";
		s=s+n;
		nt=nt+1;
	}
	
	//risposta
	
 	cout<<"la somma e' arrivata a 200 e il totale dei numeri inseriti sono: "<<nt<<endl;
	
	system("pause");
	return 0;
}
