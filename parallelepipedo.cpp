//pi greco come costante 
#define pigreco 3.1415 
#include <iostream>
// usando namespace non serve mettere std::
using namespace std;
int main(){
    float base,altezza,profondita;
    std::cout<<"dammi la base: ";
    cin>> base;
    cout<<"dammi altezza: "; cin>> altezza;
    cout<<"dammi la profondita: "; cin>> profondita;
    if (base<=0 || altezza <=0 || profondita <=0){
        cout << "dati non corretti";
    } else {
        cout << "Volume: " << base*altezza*profondita;
    }
    return 0;
}
 