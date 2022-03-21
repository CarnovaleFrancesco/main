#include <iostream>
using namespace std;
int main()
{
	//variabili
	float r; 
	float imp;
	float impon;

	cout<<" Iserire il reddito:";
	cin>>r;

	if ((r>=0)&&(r<=10000))
	{
		cout<<"Esenti"<<endl;
		imp=0;	
	}
		else
			
			if ((r>10000)&&(r<=20000))
			{
				impon=10000;
				imp=(impon*12)/100;
			}
	
				if ((r>20000)&&(r<=35000))
				{
					impon=15000;
					imp=(impon*18)/100;
				}
					if ((r>35000)&&(r<=60000))
					{
						impon=5000;
						imp=(impon*27)/100;
					}
						if ((r>60000)&&(r<=100000))
						{
							impon=0;
							imp=(impon*48)/100;
						}
						if (r>100000)
	{
	impon=0;
	imp=(impon*60)/100;
	}
	
	//risposta
	
	cout<<" L'imposta da versare e': "<<imp<<endl;
	
	system("pause");
	return 0;
}
