#define N 3
#include <iostream>
#include <cstdlib>
using namespace std;

float somma_quad(float * numeri, int n){
    float s=0;
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            s+= numeri[i*n + j];
            //printf("\nValore in riga %d colonna %d : %f",i,j,numeri[i*n + j]);
        }
    }
    return s;
}

int main(){
    int d;
    float array1[N][N]={{1,2,3},{4},{7,8,9}};
    float array2[N][N]={1,2,3,4,7,8,9};
    cout<<"\nSTAMPO\n"<<somma_quad((float *) array1,N)<<"\n";
    //stampa_quad((float *) array1,N);
    //stampa_quad((float *) array2,N);
}