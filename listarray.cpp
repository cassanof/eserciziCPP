/*
Lista (array)
initialize
insert
delete
write
read

<- dato nullo
*/
#include <iostream>

template <class TIPO>
TIPO readL(TIPO *lista,int len,int pos,TIPO vuoto){
    if (pos<0 || pos>=len) return vuoto;
    return lista[pos];
}


template <class TIPO>
int initialize(TIPO *lista,int len,TIPO vuoto){
    if (len<=0) return -1; //errore di dimensione
    for (int i=0;i<len;i++){
        lista[i]=vuoto;
    }
}


#define N 10

int main(){
    int mialista[N];
    int dato_nulla=-1;
    for (int i=0;i<N;i++){
        std::cout << readL(mialista,N,i,dato_nulla)<<" \n";
    }

}