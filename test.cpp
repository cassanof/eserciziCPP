#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float a[3][3]= {{1,2,3},{3,3,2},{2,4,3}}; // matrice quadrata 3 * 3
    int tot=0;
    for (int i=0; i<3;i++) // ciclo da 0 a 2 compresi
        tot=tot+a[i][i];     // cosa sommo ?
    cout << tot << " ";   // 
}