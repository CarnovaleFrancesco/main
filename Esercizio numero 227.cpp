#include <iostream>
using namespace std;
int MCD(int m, int n);
int main(void)
{
	int numero1, numero2;
	cout<<"Inserisci numero 1:"<<endl;
	cin>>numero1;
	cout<<"Inserisci numero 2:"<<endl;
	cin>>numero2;
	MCD(numero1,numero2);
	cout<<"L'MCD corrisponde a:"<<MCD(numero1,numero2)<<endl;
}
int MCD(int m, int n)
{
	int resto;
	resto = m % n;
	if(resto==0)
	return n;
	else 
	return MCD(n, resto);
}

