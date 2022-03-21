#include<iostream>
using namespace std;
int main()
{
	//variabili
	float n;
	
	cout<<"Inserisci un numero: ";
	cin>>n;
	cout<<"\n";
	
	cout<<"Conto alla rovescia: ";
	
	while((n<20)&&(n>= 0))
	{
		
		cout<<n<<", ";
   		n=n-1;
   	
	}
	
	system("pause");
	return 0;
}
