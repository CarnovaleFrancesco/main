#include <iostream>
using namespace std;
int main()
{
	//variabili
	int n;
	int s;
	int ni;
	int i;
	
	//input dati
	cout<<"Inserisci quanti numeri vuoi sommare: \t";
	cin>>ni;
	cout<<"\n";
	
	do
	{
		
	cout<<"Inserisci un numero: ";
	cin>>n;
	cout<<"\n";
	
	s=s+n;
	i++;

	}while(i<ni);
	
	//risposta
	cout<<"La somma dei numeri inseriti e': "<<i<<endl;
	
	system("pause");
	return 0;
}
