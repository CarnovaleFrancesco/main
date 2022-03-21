#include <iostream>
using namespace std;
int main()
{
	//variabili
	int n;
	int t;
	int min;
	
	//calcolo
	t=1000000000;
	
	do
	{
		
	cout<<"Inserisci un numero: ";
	cin>>n;
	cout<<"\n";
		
	if((n<t)&&(!(n==0)))
	{
		t=n;
		min=t;
	}
	
		else
		{
			min=t;
		}
		
	}while(n>0);
	
	//risposta	
	cout<<"Il valore minimo e': "<<min<<endl;
	
	system("pause");
	return 0;
}
