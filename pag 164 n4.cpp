#include <iostream>

using namespace std;

int main()
{
	//variabili
	int i;
	int r;
	int n;
	int m;
	
	//input dati
	cout<<"inserisci il numero di cui trovare i multipli tra 10 e 100: ";
	cin>>n;
	cout<<"\n";
	
	//calcoli
	r=0;
	m=10;
	while (m<100)
	{
		r=r+m;
		m+=n;
	}
	
	//risposta
	cout<<"il risultato e': "<<r<<endl;
	
	system("pause");
	return 0;
}
