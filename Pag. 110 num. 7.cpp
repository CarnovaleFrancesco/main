

#include <iostream>

using namespace std;

int main()
{
//variabili
int numero;

//input dati
cout<<"inserisci il numero da scomporre: ";
scanf("%d",&numero);

//risposta
if (numero<=9999){
	if (numero>=1000){
				while (numero>0){
				printf("%d\n",numero%10);
				numero = numero/10;
}
	}
	else cout<<"Inserire un numero compreso tra 1000 e 9999 :\n";
	scanf("%d",&numero);{
	if (numero<=9999){
	if (numero>=1000){
				while (numero>0){
				printf("%d\n",numero%10);
				numero = numero/10;
}
	}
	}
			else cout<<"Inserire un numero compreso tra 1000 e 9999 :\n";
	scanf("%d",&numero);{
	if (numero<=9999){
	if (numero>=1000){
				while (numero>0){
				printf("%d\n",numero%10);
				numero = numero/10;
}
	}
	}
}
}
}
system("pause");
return 0;
}
