#include <iostream>
using namespace std;
int main()
{
	//variabili
	int n;
	int i;
	int cont;
	
	//input dati
	cout<<"Inserire un numero compreso tra 1 e 20: ";
	cin>>n;
	cout<<"\n";
	
	//calcoli
	for(i=1;i<=n;i++)
	{
		for(cont=1;cont<=n;cont++)
		{
			cout<<" "<<i*cont;
		}
		cout<<"\n";
	}
	system("pause");
	return 0;
}
