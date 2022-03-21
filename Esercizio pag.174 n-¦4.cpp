#include <iostream>
using namespace std;
int main()
{
	//variabili
	int n;
	int np;
	
	//input dati
	cout<<"Inserisci un numero: ";
	cin>>n;
	cout<<"\n";

	np=n;	
	
	if(n%2==0)
	{
		np=n;
	}
	
		else
		{
			np=n-1;
		}
		
			while(np>1)
			{
				cout<<np<<" , ";
				np=np-2;	
			}
			
		cout<<"I numeri pari inferiori al numero inserito sono: "<<<<endl;	
		cout<<"\n";
	system ("pause");
	return 0;
}
