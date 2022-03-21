#include <iostream>

using namespace std;

int main()
{
	//variabili
	int n;
	int r;
	
	//input dati
	cout<<"inserisci un numero: ";
	cin>>n;
	cout<<"\n";
		
	//calcoli
	r=0;
	if (n%2==0)
	{
		while (n%2==0)
		{
			cout<<"inserisci un numero: ";
			cin>>n;
			cout<<"\n";
			r+=1;	
		}
		
			//risposta
			cout<<"i numeri pari inseriti sono: "<<r<<endl;
	}
	
	else 
	{
		//risposta
		cout<<"i numeri pari inseriti sono 0"<<endl;
	}

	system("pause");
	return 0;
	
}
