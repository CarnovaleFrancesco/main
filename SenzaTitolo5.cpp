#include <iostream>
using namespace std;
int main()
{
	//variabili
	int i;
	int n;
	n=0;
	cout<<"inserisci un numero: ";
	cin>>n;
	cout<<"\n";
	
	//calcoli && risposta
	cout<<"I primi numeri naturali maggiori a 1 \nE inferiori a: "<<n<<";\nSono:\n "<<endl;
	for(i=2;i<n;i++)
	{
		cout<<i<<endl;
		cout<<"\n";
	}
	system("pause");
	return 0;
}
