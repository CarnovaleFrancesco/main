#include <iostream>
using namespace std;

int main() {
int ore, minuti, secondi, seconditotali;
cout<<"Inserire i valori di ore, minuti e secondi: ";
cin>>ore;
cin>>minuti;
cin>>secondi;
seconditotali=(ore*3600)+(minuti*60)+(secondi*1);
cout<<" I secondi totali sono: "<<seconditotali;
return 0;
}
