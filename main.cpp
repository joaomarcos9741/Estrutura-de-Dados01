#include <iostream>
#include "vetor.h"
#include <time.h>

using namespace std;

int main()
{

vetor V;
srand(time(NULL));

cout<<"Vetor de numeros pares: "<<endl;
V.PreencheP();
V.ExibirVetorP();
cout << endl;
cout << endl;

cout<<"Vetor de numeros impares: "<<endl;
V.PreencheI();
V.ExibirVetorI();
cout << endl;
cout << endl;

cout<<"Vetor de numeros pares ordenados: "<<endl;
V.OrdenaP();
V.ExibirVetorP();
cout << endl;
cout << endl;

cout << "Vetor de numeros impares ordenados:  " << endl;
V.OrdenaI();
V.ExibirVetorI();
cout << endl;
cout << endl;

cout << "Matris com numeros ordenados:  " << endl;
V.PreecherMatris();
V.ExibirMatris();
cout << endl;
cout << endl;

return 0;
}
