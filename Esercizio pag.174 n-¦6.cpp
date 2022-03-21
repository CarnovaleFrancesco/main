#include<iostream>
using namespace std;
int main()
{
	//variabili
    int n; 
	int s;
	
    s=0;
    n=10;
    
	while(n<100)
	{
	   s=s+n;
	   n=n+5;
	}
	
	cout<<"La somma e': "<<s<<endl;
	
	system("pause");
	return 0;
}
