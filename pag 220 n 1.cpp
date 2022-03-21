#include <iostream>
#include <cmath>

using namespace std;

int tria(int n);
int quad(int n);
int diag(int n);
int colonne(int n);
int riga(int n);
int leggidati(int &n);
int mostramenu();
int main(void)
{
	//variabili 
	int num;
	int scelta;

	system("CLS");
	scelta=mostramenu();
	
	
	//operazioni
	switch(scelta)
	{
		case 1:
			
			leggidati(num);
			riga(num);
			
			break;
			
		case 2:
		
			leggidati(num);
			colonne(num);
		
			break;
				
		case 3:
		
			leggidati(num);
			diag(num);
		
			break;
			
		case 4:
			
			leggidati(num);
			quad(num);
		
			break;
			
		case 5:
			
			leggidati(num);
			tria(num);
		
			break;
	}
	
	system("pause");
	return 0;
}

int mostramenu() 
{
  int scelta;
  do
  {
    system("CLS");
    cout << "\n\n";
    cout << ("\t\t***************************************************************************\n");
    cout << ("\t\t*             \tMenu' utente principale                                   *\n");
    cout << ("\t\t************************************************************************** \n");
    cout << ("\t\t* 1 visualizza una riga di N asterischi                                   *\n");
    cout << ("\t\t* 2 visualizza una colonna di N asterischi                                *\n");
    cout << ("\t\t* 3 visualizza un diagonale di N asterischi                               *\n");
    cout << ("\t\t* 4 visualizza un quadrato con il lato di N asterischi                    *\n");
    cout << ("\t\t* 5 visualizza un triangolo rettangolo con i due cateti di N asterischi   *\n");
    cout << ("\t\t* 0 =======> USCITA   			            	                  *\n");
    cout << ("\t\t************************************************************************\n\n\n");

    cout << ("Inserire scelta (1, 2, 3, 4, 5  oppure 0)   :    ");
    cin >> scelta;

    if ((scelta < 0) || (scelta > 5))
    {
      cout << ("\n\nERRORE Digitare la scelta corretta.....\n\n");
      system("PAUSE");
    }
    else;
  } while ((scelta < 0) || (scelta > 5));

  return scelta;
}

int leggidati(int &n)
{
	cout<<"inserisci quanti asterischi vuoi: ";
	cin>>n;
	cout<<"\n";
}

int riga(int n)
{
	//variabili 
	int i;
	
	//calcoli
	i=0;
	for(i=0;i<n;i++)
	{
		cout<<"* ";
	}
	cout<<"\n"<<endl;
}

int colonne(int n)
{
	//variabili
	int i;
	
	//calcoli
	i=0;
	for(i=0;i<n;i++)
	{
		cout<<"*"<<endl;
	}
	cout<<"\n"<<endl;
}

int diag(int n)
{
	//variabili
	int i;
	int spazio;
	
	//calcoli
	i=0;
	spazio=i;
	
	for(i=0;i<n;i++){
			for(spazio=i;spazio>=0;spazio--)
			{
				cout<<" ";
			}
			cout<<"*";
			cout<<"\n";
		}
	cout<<"\n"<<endl;
}

int quad(int n)
{
	//variabili 
	int i;
	int cont;

	//calcoli
	
	for(int i=0;i<n;i++)
	{
   	 cout<<endl;
    	for(int cont=0;cont<n;cont++)
       	 if(i==0 || i== n-1 || cont==0 || cont==n-1)
       	 {
            cout<<" *";
    	 }
      	  else
      	  	 {
         	   cout<<"  ";
         	 }
	}
	
	cout<<"\n"<<endl;
	
}

int tria(int n)
{
	//variabili 
	int ipo;
	int i;
	int cont;
	int spazio;
	
	//calcoli
		ipo=sqrt(double(n)+double(n));
		
		for(i=0;i<n-1;i++)
		{
			if(i==0)
			{
				cout<<"*"<<endl;
			}
			
			else
		    	{
					if(i==1)
					{
						cout<<"**"<<endl;
					}
					
			for(cont=0;cont<ipo;cont++)
			{
				
			cout<<"*";
			
			for(spazio=cont;spazio>=0;spazio--)
			{
				cout<<" ";
			}
			cout<<"*"<<endl;
			}	
			
		break;
		
		}	
		}
		
		for(i=0;i<n;i++)
		{
			cout<<"*";
		}
		cout<<endl;
	
}
