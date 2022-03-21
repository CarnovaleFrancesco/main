#include<iostream>

using namespace std;

int main()
{	
	 //variabili
    int a;
	int b;
	int c;
	int d;
	int e;
    
    //input dati
    cout<<"Inserire il primo numero:"<<endl;
    cin>>a;
    cout<<"\n";
    cout<<"Inserire il secondo numero:"<<endl;
    cin>>b;
    cout<<"\n";
    cout<<"Inserire il terzo numero:"<<endl;
    cin>>c;
    cout<<"\n";
    cout<<"Inserire il quarto numero:"<<endl;
    cin>>d;
    cout<<"\n";
    cout<<"Inserire il quinto numero:"<<endl;
    cin>>e;
    cout<<"\n";
    
    //calcoli
    if((a-b==c-d)&&(e-d==c-b))
    {
    	//risposta 
    	cout<<"Appartengono alla sequenza dei numeri naturali"<<endl;
    }
    	else
    		//risposta
    		cout<<"Non appartengono alla sequenza dei numeri naturali"<<endl;
    
	system("pause");		
	return 0;
}
