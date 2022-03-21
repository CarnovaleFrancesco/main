#include <iostream>

using namespace std;
int mostraMenu();
string binario(int num);
int main(void)
{
	//variabili
	int num;
	string bin;
	int scelta;
	
	//input dati
	do
	{
	
	cout<<"inserisci un numero: ";
	cin>>num;
	
       
	system("CLS");
	scelta = mostraMenu();
	
		//calcolo
		switch (scelta)
			{
				case 1:
			
				bin=binario(num);
				cout<<"il numero in binario e':"<<bin<<endl;	
			
					break;
				
				case 2:
			
	                
			
					break;
		
			  case 3:
			
		  
		
					break;	
					
			  case 4:
			
		  
		
					break;
					
		   	  case 5:
			
		  
		
					break;
					
		}
	}while(num !=0);
	
}
int mostraMenu()
{
  int scelta;

    system("CLS");
    cout << "\n\n";
    cout << ("\t\t**********************************\n");
    cout << ("\t\t*    \tMenu' utente principale   *\n");
    cout << ("\t\t**********************************\n");
    cout << ("\t\t* 1 binario         *\n");
    cout << ("\t\t* 2 ottale          *\n");
    cout << ("\t\t* 3 esadecimale     *\n");
    cout << ("\t\t* 4 vigesimale      *\n");
    cout << ("\t\t* 5 romano          *\n");
    cout << ("\t\t* 0 =======> USCITA *\n");
    cout << ("\t\t*********************\n\n\n");

    cout << ("Inserire scelta (1, 2, 3, 4, 5  oppure 0)   :    ");
    cin >> scelta;
  return scelta;
}
string binario(int num)
{
	//variabili
	string b;
	
	//calcolo
	while(num>0)
	{
		if(num%2==0)
		{
			b= '0'+b;
		}
		else
		{
			b='1'+b;
		}
	}
	
	return b;
}
