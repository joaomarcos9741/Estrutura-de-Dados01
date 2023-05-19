#include "vetor.h"

void::vetor::PreencheP(){
    int n;
    for(int i=0; i<18; i++){
    do{
      n= rand()%100+1;
    }while(n%2 != 0);
    VetorPar[i]=n;
    }
};

void::vetor::ExibirVetorP(){
    for(int i=0; i<18; i++){
    std::cout<< VetorPar[i]<<"  ";
    }

};

void::vetor::PreencheI(){
    int m;
    for(int j=0; j<18; j++){
    do{
      m= rand()%100+1;
    }while(m%2 == 0);
    VetorImpar[j]=m;
    }
};

void::vetor::ExibirVetorI(){
    for(int j=0; j<18; j++){
    std::cout<< VetorImpar[j]<<"  ";
    }

};

void vetor::OrdenaP(){
    int aux ;
    for( int i = 0; i <18; i ++){
        for( int j = 0; j < (18 - 1) ; j ++) {
            if( VetorPar [j ] > VetorPar [j + 1]) {
            aux = VetorPar[j ];
            VetorPar[ j] = VetorPar [j + 1];
            VetorPar[ j + 1] = aux ;
            }
        }
    }
 };


 void vetor::OrdenaI(){
    int aux ;
    for( int i = 0; i <18; i ++){
        for( int j = 0; j < (18 - 1) ; j ++) {
            if( VetorImpar [j ] > VetorImpar [j + 1]) {
            aux = VetorImpar[j ];
            VetorImpar[ j] = VetorImpar [j + 1];
            VetorImpar[ j + 1] = aux ;
            }
        }
    }
 };


void vetor::PreecherMatris(){
     int imp, par;
    par = imp = 0 ;
    for ( int i= 0 ; i < 6 ; i++){
        for ( int j= 0 ; j< 6 ; j++){
            if (imp < 18 && par < 18 ){
                if (VetorImpar[imp] < VetorPar[par]){
                    matriz[i][j] = VetorImpar[imp];
                    imp++;
                } else {
                    matriz[i][j] = VetorPar[par];
                    par++;
                }
            } else  if (imp < 18 ){
                matriz[i][j] = VetorImpar[imp];
                imp++;
            } else {
                matriz[i][j] = VetorPar[par];
                par++;
            }
        }
    }
}


void vetor::ExibirMatris(){
    for ( int i= 0 ; i < 6 ; i++){
        for ( int j= 0 ; j< 6 ; j++){
            std::cout << " \t " << matriz[i][j];
        }
        std::cout << " \n " ;
    }

}


