#include <iostream>
using namespace std;

int main(){
    int i=0;
    cout << "numero di cicli: "; cin >> i;
    if (i<0 || i>10) return 0;
    ciclo:
        if(i<=0) goto uscita;
        cout << i << " ";
        i--;
        goto ciclo;
    uscita:
    return 0;
}