#include <iostream>

using namespace std;

int main()
{
	//variabili 
	int n;
	int t;
	
	//calcoli
	
	t=0;
	
	do
	{
		cout<<"inserisci un numero: ";
		cin>>n;
		cout<<"\n";
		
		if(n>0)
		{
			t+=1;
		}
		
	}while(n>0);
	
	//risposta
	cout<<"i numeri inseriti sono: "<<t<<endl;
	
	system("pause");
	return 0;
}
